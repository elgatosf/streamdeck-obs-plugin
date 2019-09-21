#include "actionhelp.h"
#include <QDebug>
#include <QThread>
#include <QTcpServer>
#include <QObject>
#include <QDataStream>
#include <QApplication>

// ----------------------------------------------------------------------------
extern QTcpServer *tcpServer;

//Wrapper for converting strings from OBS
static std::string GetOBSSourceName(const obs_source_t * inSource)
{
	if (inSource != NULL)
	{
		const char *sourceName = obs_source_get_name(inSource);
		if (sourceName != NULL)
		{
			return std::string(sourceName);
		}
	}

	return "";
}

// ----------------------------------------------------------------------------
ActionHelp::ActionHelp(QObject *parent) : QObject(parent)
{

}

ActionHelp::~ActionHelp()
{
	if (mSocket)
	{
		delete(mSocket);
	}
}


// ----------------------------------------------------------------------------
// Public functions
// ----------------------------------------------------------------------------
bool ActionHelp::GetIsRespondingStreamingFlag()
{
    return mIsRespondingStreamingFlag;
}

bool ActionHelp::GetIsRespondingCollectionsSchemaFlag()
{
    return mIsRespondingCollectionsSchemaFlag;
}

void ActionHelp::UpdateSceneCollectionList(QStringList &list)
{
    list.clear();

    char **strList = obs_frontend_get_scene_collections();

    if (!strList)
    {
        qDebug() << __FUNCTION__ << "Err: call obs_frontend_get_scene_collections() got NULL!";
        return;
    }
	
    for (int i = 0 ; strList[i] ; i++)
    {
        QString name = strList[i];
        list << name;
    }

    bfree(strList);
}

void ActionHelp::UpdateScenesList(QList<SceneInfo> &outList)
{
	outList.clear();

	// Enumerate scenes for current scene collection
	struct obs_frontend_source_list scenes = {};
	obs_frontend_get_scenes(&scenes);

	for (size_t i = 0; i < scenes.sources.num; i++)
	{
		auto sceneEntry = scenes.sources.array[i];

		if (!sceneEntry)
		{
			continue;
		}

		SceneInfo sceneInfo = {};
		sceneInfo.scene = sceneEntry;

		std::string sceneName = GetOBSSourceName(sceneEntry);

		obs_scene_t *scene = obs_scene_from_source(sceneEntry);
		if (!scene)
		{
			QString errStr = "Err: obs_scene_from_source(sceneSource) return NULL!";
			qDebug() << errStr;

			continue;
		}

		sceneInfo.name = sceneName;

		// 3. enum items by scene
		auto enumFunc = [](obs_scene_t*, obs_sceneitem_t* item, void* param)
		{
			if (!param)
			{
				qDebug() << __FUNCTION__ << __LINE__ << "Err: param is NULL!";
				return false;
			}

			QList<SceneItemInfo> *list = reinterpret_cast<QList<SceneItemInfo>*>(param);

			int64_t sceneItemId = obs_sceneitem_get_id(item);

			obs_source_t *source = obs_sceneitem_get_source(item);
			if (!source)
			{
				qDebug() << __FUNCTION__ << __LINE__ << "Err: obs_sceneitem_get_source(sceneSource) return NULL!";
				return false;
			}

			SceneItemInfo sceneItemInfo = {};
			sceneItemInfo.sceneItemId = sceneItemId;
			sceneItemInfo.sourceName = GetOBSSourceName(source);
			sceneItemInfo.isGroup = obs_sceneitem_is_group(item);
			sceneItemInfo.source = source;

			// 4. if is group, enum sources by group
			if (sceneItemInfo.isGroup)
			{
				auto enumSourcesByGroupFunc = [](obs_scene_t*, obs_sceneitem_t* item, void* param)
				{
					if (!param)
					{
						qDebug() << __FUNCTION__ << __LINE__ << "Err: param is NULL!";
						return false;
					}

					QList<GroupItemInfo> *list = reinterpret_cast<QList<GroupItemInfo>*>(param);

					int64_t sceneItemId = obs_sceneitem_get_id(item);

					obs_source_t *source = obs_sceneitem_get_source(item);
					if (!source)
					{
						qDebug() << __FUNCTION__ << __LINE__ << "Err: obs_sceneitem_get_source(item) return NULL!";
						return false;
					}

					GroupItemInfo sceneItemInfo = {};
					sceneItemInfo.sceneItemId = sceneItemId;
					sceneItemInfo.sourceName = GetOBSSourceName(source);
					sceneItemInfo.isVisible = obs_sceneitem_visible(item);
					list->prepend(sceneItemInfo);

					return true;
				};

				QList<GroupItemInfo>  groupItems;

				obs_sceneitem_group_enum_items(item, enumSourcesByGroupFunc, &groupItems);
				sceneItemInfo.groupSceneItems = groupItems;
			}

			sceneItemInfo.isVisible = obs_sceneitem_visible(item);
			list->prepend(sceneItemInfo);
			return true;
		};

		QList<SceneItemInfo>  sceneItems;
		obs_scene_enum_items(scene, enumFunc, &sceneItems);

		sceneInfo.sceneItems = sceneItems;
		outList.append(sceneInfo);
	}

	obs_frontend_source_list_free(&scenes);
}

void ActionHelp::UpdateScenesAsSourcesList(QList<SourceInfo> &outSet)
{
	// Enumerate scenes for current scene collection
	struct obs_frontend_source_list scenes = {};
	obs_frontend_get_scenes(&scenes);

	for (size_t i = 0; i < scenes.sources.num; i++)
	{
		auto sceneEntry = scenes.sources.array[i];

		if (!sceneEntry)
		{
			continue;
		}

		SceneInfo sceneInfo = {};
		sceneInfo.scene = sceneEntry;

		std::string sceneName = obs_source_get_name(sceneEntry);

		obs_scene_t *scene = obs_scene_from_source(sceneEntry);
		if (!scene)
		{
			QString errStr = "Err: obs_scene_from_source(sceneSource) return NULL!";
			qDebug() << errStr;

			continue;
		}

		sceneInfo.name = sceneName;

		// 3. enum items by scene
		auto enumFunc = [](obs_scene_t*, obs_sceneitem_t* item, void* param)
		{
			if (!param)
			{
				qDebug() << __FUNCTION__ << __LINE__ << "Err: param is NULL!";
				return false;
			}

			QList<SourceInfo> *list = reinterpret_cast<QList<SourceInfo>*>(param);

			obs_source_t *source = obs_sceneitem_get_source(item);
			if (!source)
			{
				qDebug() << __FUNCTION__ << __LINE__ << "Err: obs_sceneitem_get_source(sceneSource) return NULL!";
				return false;
			}

			bool isGroup = obs_sceneitem_is_group(item);
			QList<SourceInfo>  groupSceneSourceItems;

			// 4. if is group, enum sources by group
			if (isGroup)
			{
				auto enumSourcesByGroupFunc = [](obs_scene_t*, obs_sceneitem_t* item, void* param)
				{
					if (!param)
					{
						qDebug() << __FUNCTION__ << __LINE__ << "Err: param is NULL!";
						return false;
					}

					QList<SourceInfo> *list = reinterpret_cast<QList<SourceInfo>*>(param);

					obs_source_t *source = obs_sceneitem_get_source(item);
					if (!source)
					{
						qDebug() << __FUNCTION__ << __LINE__ << "Err: obs_sceneitem_get_source(sceneSource) return NULL!";
						return false;
					}

					if (obs_source_get_type(source) == OBS_SOURCE_TYPE_SCENE)
					{
						SourceInfo obsSource = {};
						obsSource.source = source;
						obsSource.name = GetOBSSourceName(source);
						obsSource.type = OBS_SOURCE_TYPE_SCENE;
						obsSource.idStr = obs_source_get_id(source);

						obsSource.isMuted = obs_source_muted(source);
						obsSource.isAudio = false;

						if (!list->contains(obsSource))
						{
							list->append(obsSource);
						}
					}

					return true;
				};

				obs_sceneitem_group_enum_items(item, enumSourcesByGroupFunc, &groupSceneSourceItems);
			}

			if (!groupSceneSourceItems.empty())
			{
				for (int i = 0; i < groupSceneSourceItems.count(); i++)
				{
					if (!list->contains(groupSceneSourceItems[i]))
					{
						list->append(groupSceneSourceItems[i]);
					}
				}
			}


			if (obs_source_get_type(source) == OBS_SOURCE_TYPE_SCENE)
			{
				SourceInfo obsSource = {};
				obsSource.source = source;
				obsSource.name = GetOBSSourceName(source);
				obsSource.type = OBS_SOURCE_TYPE_SCENE;
				obsSource.idStr = obs_source_get_id(source);

				obsSource.isMuted = obs_source_muted(source);
				obsSource.isAudio = false;

				if (!list->contains(obsSource))
				{
					list->append(obsSource);
				}
			}

			return true;
		};

		obs_scene_enum_items(scene, enumFunc, &outSet);
	}

	obs_frontend_source_list_free(&scenes);
}

void ActionHelp::UpdateSourcesList(QList<SourceInfo> &outSourceList)
{
	outSourceList.clear();

	// enum all source items
	auto enumFunc = [](void* param, obs_source_t* source)
	{
		if (!param)
		{
			qDebug() << __FUNCTION__ << __LINE__ << "Err: param is NULL!";
			return false;
		}

		QList<SourceInfo> *list = reinterpret_cast<QList<SourceInfo>*>(param);

		// Get source
		SourceInfo obsSource = {};
		obsSource.source = source;
		obsSource.name = GetOBSSourceName(source);
		obsSource.type = obs_source_get_type(source);
		obsSource.idStr = obs_source_get_id(source);
		obsSource.isMuted = obs_source_muted(source);

		uint32_t outputFlags = obs_source_get_output_flags(source);
		bool isAudio = (outputFlags & OBS_SOURCE_AUDIO) != 0;
		obsSource.isAudio = isAudio;
		obsSource.isGroup = obs_source_is_group(source);

		list->append(obsSource);
		return true;
	};

	obs_enum_sources(enumFunc, &outSourceList);

	QList<SourceInfo> scenesAsSourcesList;
	UpdateScenesAsSourcesList(scenesAsSourcesList);

	outSourceList.append(scenesAsSourcesList);
}

void ActionHelp::WriteToSocket(const std::string &inString)
{
	bool isMainThread = qApp->thread() == QThread::currentThread();

	if (!isMainThread)
	{
		QString qString = QString(inString.c_str());
		QMetaObject::invokeMethod(this, "WriteToSocketInMainThread", Qt::QueuedConnection, Q_ARG(QString, qString));
	}
	else
	{
		if (mSocket
			&& mSocket->isValid())
		{
			mSocket->write(inString.c_str());
		}
	}
}


// ----------------------------------------------------------------------------
// Slot functions
// ----------------------------------------------------------------------------

//void ActionHelp::reqVersion()
//{
//	sendNotifyFlag = false;
//
//	QStringList list;
//	auto versionInfo = VERSION_STR;
//
//	list.append(versionInfo);
//	
//	QByteArray buf;
//
//	sendNotifyFlag = true;
//}

void ActionHelp::NotifySceneSwitched()
{
    qDebug() << __FUNCTION__ << __LINE__;

    QString scName, sceneName;
    if (!GetCurrentCollectionAndSceneName(scName, sceneName))
        return;

	json eventJson;
	eventJson["jsonrpc"] = "2.0";
	json result = json::object();
	result["_type"] = "EVENT";
	eventJson["id"] = nullptr;

	json dataObj = json::object();
	dataObj["id"] = scName.toStdString() + sceneName.toStdString();

	result["data"] = dataObj;
	result["resourceId"] = "ScenesService.sceneSwitched";

	eventJson["result"] = result;

	std::string str = eventJson.dump() + "\n";
	WriteToSocket(str);
}

void ActionHelp::NotifyCollectionChanged()
{
    qDebug() << __FUNCTION__ << __LINE__;

    QString scName, sceneName;
    if (!GetCurrentCollectionAndSceneName(scName, sceneName))
        return;

	json eventJson;
	eventJson["jsonrpc"] = "2.0";
	json result = json::object();
	result["_type"] = "EVENT";
	eventJson["id"] = nullptr;

	json dataObj = json::object();
	dataObj["id"] = scName.toStdString();

	result["data"] = dataObj;
	result["resourceId"] = "SceneCollectionsService.collectionSwitched";

	eventJson["result"] = result;

	std::string str = eventJson.dump() + "\n";
	WriteToSocket(str);
}

void ActionHelp::SDClientConnected()
{
	while (tcpServer->hasPendingConnections())
	{
		mSocket = tcpServer->nextPendingConnection();

		QObject::connect(mSocket, SIGNAL(readyRead()), SLOT(ReadyRead()));
		connect(mSocket, SIGNAL(disconnected()), SLOT(Disconnected()));
	}
}


void ActionHelp::WriteToSocketInMainThread(QString inString)
{
	if (mSocket
		&& mSocket->isValid())
	{
		mSocket->write(inString.toStdString().c_str());
	}
}

void ActionHelp::ReadyRead()
{
	QByteArray lineByteArray;

	while (mSocket->canReadLine())
	{
		try
		{
			lineByteArray = mSocket->readLine();

			json receivedJson = json::parse(lineByteArray);

			int rpcID = JSONUtils::GetIntByName(receivedJson, "id");

			json responseJson;
			responseJson["jsonrpc"] = "2.0";
			responseJson["id"] = rpcID;

			json result = json::object();

			switch (rpcID)
			{
			case RPC_ID_startStreaming:
			{
				mIsRespondingStreamingFlag = false;

				if (RequestStartStreaming())
				{
					responseJson["error"] = false;
				}
				else 
				{
					responseJson["error"] = true;
				}

				std::string str = responseJson.dump() + "\n";
				WriteToSocket(str);

				mIsRespondingStreamingFlag = true;

			}
			break;
			case RPC_ID_stopStreaming:
			{
				mIsRespondingStreamingFlag = false;

				if (RequestStopStreaming())
				{
					responseJson["error"] = false;
				}
				else
				{
					responseJson["error"] = true;
				}

				std::string str = responseJson.dump() + "\n";
				WriteToSocket(str);

				mIsRespondingStreamingFlag = true;
			}
			break;

			case RPC_ID_startRecording:
			{
				mIsRespondingStreamingFlag = false;

				if (RequestStartRecording())
				{
					responseJson["error"] = false;
				}
				else
				{
					responseJson["error"] = true;
				}

				std::string str = responseJson.dump() + "\n";
				WriteToSocket(str);

				mIsRespondingStreamingFlag = true;
			}
			break;

			case RPC_ID_stopRecording:
			{
				mIsRespondingStreamingFlag = false;

				if (RequestStopRecording())
				{
					responseJson["error"] = false;
				}
				else
				{
					responseJson["error"] = true;
				}

				std::string str = responseJson.dump() + "\n";
				WriteToSocket(str);

				mIsRespondingStreamingFlag = true;
			}
			break;

			case RPC_ID_getRecordingAndStreamingState:
			{
				mIsRespondingStreamingFlag = false;

				if (obs_frontend_streaming_active())
				{
					result["streamingStatus"] = "live";
				}
				else
				{
					result["streamingStatus"] = "offline";
				}

				if (obs_frontend_recording_active())
				{
					result["recordingStatus"] = "recording";
				}
				else
				{
					result["recordingStatus"] = "offline";
				}
				responseJson["result"] = result;

				std::string str = responseJson.dump() + "\n";
				WriteToSocket(str);

				mIsRespondingStreamingFlag = true;
			}

			break;

			case RPC_ID_fetchSceneCollectionsSchema:
			{
				mIsRespondingCollectionsSchemaFlag = false;

				json data = json::array();

				QStringList list;
				UpdateSceneCollectionList(list);

				for (const auto& i : list)
				{
					json collection = json::object();
					collection["name"] = i.toStdString();
					collection["id"] = i.toStdString();

					data.push_back(collection);
				}

				result["data"] = data;
				result["isRejected"] = false;
				result["resourceId"] = "dummy";
				result["_type"] = "EVENT";

				responseJson["result"] = result;

				std::string str = responseJson.dump() + "\n";
				WriteToSocket(str);

				mIsRespondingCollectionsSchemaFlag = true;
			}
			break;

			case RPC_ID_makeCollectionActive:
			{
				mIsRespondingCollectionsSchemaFlag = false;

				json params;
				if (JSONUtils::GetObjectByName(receivedJson, "params", params))
				{
					json args;
					if (JSONUtils::GetArrayByName(params, "args", args))
					{
						if (args[0].is_string())
						{
							std::string sceneCollectionId = args[0];

							if (SelectSceneCollection(sceneCollectionId.c_str()))
							{
								std::string str = responseJson.dump() + "\n";
								WriteToSocket(str);

								NotifyCollectionChanged();
							}
						}
					}
				}

				mIsRespondingCollectionsSchemaFlag = true;
			}
			break;

			case RPC_ID_makeSceneActive:
			{
				mIsRespondingCollectionsSchemaFlag = false;

				bool isActive = false;

				json params;
				if (JSONUtils::GetObjectByName(receivedJson, "params", params))
				{
					json args;
					if (JSONUtils::GetArrayByName(params, "args", args))
					{
						if (args[0].is_string())
						{
							std::string sceneName = args[0];

							if (SelectScene(sceneName.c_str()))
							{
								isActive = true;

								NotifySceneSwitched();
							}
						}
					}
				}

				responseJson["result"] = isActive;
				std::string str = responseJson.dump() + "\n";
				WriteToSocket(str);

				mIsRespondingCollectionsSchemaFlag = true;
			}
			break;

			case RPC_ID_hideScene:
			case RPC_ID_showScene:
			{
				bool hasChangedVisibility = false;
				mIsRespondingCollectionsSchemaFlag = false;

				json params;

				if (JSONUtils::GetObjectByName(receivedJson, "params", params))
				{
					std::string sceneId = params["sceneId"];
					std::string sceneItemId = params["sceneItemId"];
					std::string sourceId = params["sourceId"];

					std::string groupParentId = params["groupSourceId"];

					ToggleInfo toggleInfo;

					if (rpcID == RPC_ID_hideScene)
					{
						toggleInfo = ToggleInfo::Deactivate;
					}
					else
					{
						toggleInfo = ToggleInfo::Activate;
					}

					if (ToggleSourceVisibility(sceneId.c_str(), sceneItemId.c_str(), sourceId.c_str(), groupParentId.c_str(), toggleInfo))
					{
						json eventJson;
						eventJson["jsonrpc"] = "2.0";
						json result = json::object();
						result["_type"] = "EVENT";
						eventJson["id"] = nullptr;

						result["resourceId"] = "ScenesService.itemUpdated";
						eventJson["result"] = result;

						std::string str = eventJson.dump() + "\n";
						WriteToSocket(str);

						hasChangedVisibility = true;
					}
				}

				if (!hasChangedVisibility)
				{
					json error = json::object();

					//ToDo: More precise message
					error["message"] = "Failed to change scene item visibility";

					responseJson["error"] = error;
				}
				std::string str = responseJson.dump() + "\n";
				WriteToSocket(str);

				mIsRespondingCollectionsSchemaFlag = true;
			}
			break;

			case RPC_ID_muteMixerAudioSource:
			case RPC_ID_unmuteMixerAudioSource:
			{
				bool hasMuted = false;
				mIsRespondingCollectionsSchemaFlag = false;

				json params;

				if (JSONUtils::GetObjectByName(receivedJson, "params", params))
				{
					std::string sourceId = params["sourceId"];

					ToggleInfo toggleInfo;

					if (rpcID == RPC_ID_muteMixerAudioSource)
					{
						toggleInfo = ToggleInfo::Deactivate;
					}
					else
					{
						toggleInfo = ToggleInfo::Activate;
					}

					if (MuteMixerSource(sourceId.c_str(), toggleInfo))
					{
						json eventJson;
						eventJson["jsonrpc"] = "2.0";
						json result = json::object();
						result["_type"] = "EVENT";
						eventJson["id"] = nullptr;

						result["resourceId"] = "SourcesService.sourceUpdated";
						eventJson["result"] = result;

						std::string str = eventJson.dump() + "\n";
						WriteToSocket(str);

						hasMuted = true;
					}
				}

				if (!hasMuted)
				{
					json error = json::object();

					//ToDo: More precise message
					error["message"] = "Failed to change scene item visibility";

					responseJson["error"] = error;
				}
				std::string str = responseJson.dump() + "\n";
				WriteToSocket(str);

				mIsRespondingCollectionsSchemaFlag = true;
			}
			break;

			case RPC_ID_getScenes:
			{
				mIsRespondingCollectionsSchemaFlag = false;

				json params;
				if (JSONUtils::GetObjectByName(receivedJson, "params", params))
				{
					json args;
					if (JSONUtils::GetArrayByName(params, "args", args))
					{
						json resultArray = json::array();

						QString collectionName;

						if (args[0].is_string())
						{
							if (args[0] == "")
							{
								collectionName = GetCurrentSceneCollectionName();
							}
							else
							{
								collectionName = QString(JSONUtils::GetString(args[0]).c_str());
							}

							QList<SceneInfo> list;
							if (RequestSceneListUpdate(collectionName, list))
							{
								for (const auto& i : list)
								{
									auto nodesArray = json::array();

									for (const auto& j : i.sceneItems)
									{
										json sceneItem = json::object();
										sceneItem["sourceId"] = collectionName.toStdString() + j.sourceName;
										sceneItem["sceneItemId"] = (int)j.sceneItemId;
										sceneItem["visible"] = j.isVisible;

										std::list<json> groupItemsList = std::list<json>();

										if (j.isGroup)
										{
											auto groupNodesArray = json::array();

 
											for (const auto& k : j.groupSceneItems)
											{
												json groupItem = json::object();

												groupItem["sourceId"] = collectionName.toStdString() + k.sourceName;
												groupItem["sceneItemId"] = (int)k.sceneItemId;
												groupItem["visible"] = k.isVisible;
												groupItem["sceneNodeType"] = "item";
												groupItem["parentId"] = (int)j.sceneItemId;

												groupItemsList.push_back(groupItem);
												groupNodesArray.push_back(std::to_string((int)k.sceneItemId));
											}

											sceneItem["sceneNodeType"] = "folder";
											sceneItem["childrenIds"] = groupNodesArray;
											sceneItem["name"] = j.sourceName;
										}
										else
										{
											sceneItem["sceneNodeType"] = "item";
											sceneItem["parentId"] = "";
										}

										nodesArray.push_back(sceneItem);

										for (const auto& groupItem : groupItemsList)
										{
											nodesArray.push_back(groupItem);
										}
									}

									json scene = json::object();
									scene["name"] = i.name;
									scene["id"] = collectionName.toStdString() + i.name;

									scene["nodes"] = nodesArray;

									resultArray.push_back(scene);
								}

								result["_type"] = "HELPER";

								responseJson["result"] = resultArray;
								responseJson["collection"] = collectionName.toStdString();

								std::string str = responseJson.dump() + "\n";
								WriteToSocket(str);
							}
						}
					}
				}
				mIsRespondingCollectionsSchemaFlag = true;
			}
			break;

			case RPC_ID_getSources:
			{
				mIsRespondingCollectionsSchemaFlag = false;

				json params;
				if (JSONUtils::GetObjectByName(receivedJson, "params", params))
				{
					json args;

					if (JSONUtils::GetArrayByName(params, "args", args))
					{
						json resultArray = json::array();

						QString collectionName;

						if (args[0].is_string())
						{
							if (args[0] == "")
							{
								collectionName = GetCurrentSceneCollectionName();
							}
							else
							{
								collectionName = QString(JSONUtils::GetString(args[0]).c_str());
							}
						}

						QList<SourceInfo> list;
						if (RequestSourcesListUpdate(collectionName, list))
						{
							for (const auto& i : list)
							{
								json source = json::object();
								source["name"] = i.name;
								source["type"] = i.idStr;
								source["muted"] = i.isMuted;
								source["audio"] = i.isAudio;
								source["group"] = i.isGroup;

								source["id"] = collectionName.toStdString() + i.name;

								resultArray.push_back(source);
							}

							result["_type"] = "HELPER";

							responseJson["result"] = resultArray;
							responseJson["collection"] = collectionName.toStdString();

							std::string str = responseJson.dump() + "\n";
							WriteToSocket(str);
						}
					}
				}

				mIsRespondingCollectionsSchemaFlag = true;
			}

			case RPC_ID_getActiveCollection:
			{
				QString activeCollection = GetCurrentSceneCollectionName();
				result["id"] = activeCollection.toStdString();
				responseJson["result"] = result;

				std::string str = responseJson.dump() + "\n";
				WriteToSocket(str);
			}
			break;

			case RPC_ID_getActiveSceneId:
			{
				QString activeCollection = GetCurrentSceneCollectionName();
				QString activeSceneName = GetCurrentSceneName();
				responseJson["result"] = activeCollection.toStdString() + activeSceneName.toStdString();
				std::string str = responseJson.dump() + "\n";
				WriteToSocket(str);
			}
			break;
			}
		}
		catch (...)
		{
			// internal inconsistence, bail out
		}
	}
}

void ActionHelp::Disconnected()
{
	mSocket->deleteLater();
	mSocket = nullptr;
}

// ----------------------------------------------------------------------------
// Private functions
// ----------------------------------------------------------------------------
QString ActionHelp::GetCurrentSceneCollectionName()
{
	char *curr_scName = obs_frontend_get_current_scene_collection();
	if (!curr_scName)
	{
		qDebug() << __FUNCTION__ << "Err: obs_frontend_get_current_scene_collection() got NULL!!";
		return "";
	}

	QString current_scName = curr_scName;
	bfree(curr_scName);

	return current_scName;
}

QString ActionHelp::GetCurrentSceneName()
{
	// get current scene name
	obs_source_t *current_scene = obs_frontend_get_current_scene();
	if (!current_scene)
	{
		qDebug() << __FUNCTION__ << "Err: obs_frontend_get_current_scene() got NULL!!";
		return "";
	}

	QString current_sceneName = GetOBSSourceName(current_scene).c_str();
	obs_source_release(current_scene);

	return current_sceneName;
}

bool ActionHelp::GetCurrentCollectionAndSceneName(QString &scName, QString&sceneName)
{
	scName = GetCurrentSceneCollectionName();
	sceneName = GetCurrentSceneName();

	if (scName.isEmpty() || sceneName.isEmpty())
	{
		qDebug() << __FUNCTION__ << "scName or sceneName is empty!!!";
		return false;
	}

	return true;
}


bool ActionHelp::SelectSceneCollection(QString scName)
{
	QString curr_scName = GetCurrentSceneCollectionName();
	if (curr_scName.isEmpty())
	{
		qDebug() << __FUNCTION__ << "Err: obs_frontend_get_current_scene_collection() got NULL!!";
		return false;
	}

	if (curr_scName != scName)
	{
		qDebug() << __FUNCTION__ << QThread::currentThread() << QString("obs_frontend_set_current_scene_collection(%1)").arg(scName);

		obs_frontend_set_current_scene_collection(scName.toStdString().c_str());
		return true;
	}

	return false;
}

bool ActionHelp::SelectScene(QString sceneName)
{
	QString errStr;

	QString scName, currentSceneName;
	if (!GetCurrentCollectionAndSceneName(scName, currentSceneName))
		return false;

	if (currentSceneName.isEmpty())
	{
		errStr = "Err: obs_frontend_get_current_scene() got NULL!";
		qDebug() << errStr;
		return false;
	}

	//ToDo: Find better solution using real Id for scene
	sceneName.remove(0, scName.size());

	// update info
	QList<SceneInfo> sceneList;
	UpdateScenesList(sceneList);

	for (int i = 0; i < sceneList.count(); i++)
	{
		SceneInfo sceneInfo = sceneList.at(i);
		if (sceneInfo.name.c_str() == sceneName)
		{
			qDebug() << __FUNCTION__ << QThread::currentThread() << QString("obs_frontend_set_current_scene(%1)").arg(sceneName);

			obs_frontend_set_current_preview_scene(sceneInfo.scene);
			return true;
		}
	}

	// can't find match scene in list
	errStr = "can't find match scene name in list!";
	qDebug() << errStr;
	return false;
}

bool ActionHelp::ToggleSourceVisibility(QString inSceneId, QString inSceneItemId, QString inSourceId, QString inGroupParentId, ToggleInfo toggleInfo)
{
	QString collectionName = GetCurrentSceneCollectionName();

	//ToDo: Find better solution using real Id for scene
	QString sceneName = inSceneId;
	sceneName.remove(0, collectionName.size());

	bool isConverted;
	int sceneItemId = inSceneItemId.toInt(&isConverted);

	if (!isConverted)
	{
		qDebug() << "Can't convert scene item id to int!";
	}

	//ToDo: Find better solution using real Id for source
	QString srcName = inSourceId;
	srcName.remove(0, collectionName.size());

	QList<SceneInfo> sceneList;
	UpdateScenesList(sceneList);

	obs_source_t *sceneAsSource = NULL;
	for (int i = 0; i < sceneList.count(); i++)
	{
		if (sceneName == sceneList.at(i).name.c_str())
		{
			sceneAsSource = sceneList.at(i).scene;
			break;
		}
	}

	if (!sceneAsSource)
	{
		qDebug() << __FUNCTION__ << __LINE__ << "can't find match scene!";
		return false;
	}

	obs_scene_t* scene = obs_scene_from_source(sceneAsSource);
	if (!scene)
	{
		qDebug() << __FUNCTION__ << __LINE__ << "not a scene!";
		return false;
	}

	obs_sceneitem_t* item = nullptr;

	if (inGroupParentId.isEmpty() || inGroupParentId.isNull())
	{
		item = obs_scene_find_sceneitem_by_id(scene, sceneItemId);
		if (!item)
		{
			qDebug() << __FUNCTION__ << __LINE__ << "obs_scene_find_sceneitem_by_id() got NULL";

			item = obs_scene_find_source(scene, srcName.toStdString().c_str());
			if (!item)
			{
				qDebug() << __FUNCTION__ << __LINE__ << "obs_scene_find_source() got NULL";
				return false;
			}
		}

		obs_source_t *source = obs_sceneitem_get_source(item);
		if (!source)
		{
			qDebug() << __FUNCTION__ << __LINE__ << "obs_sceneitem_get_source() got NULL";
			return false;
		}
	}
	else
	{
		//ToDo: Find better solution using real Id for source
		QString srcGroupName = inGroupParentId;
		srcGroupName.remove(0, collectionName.size());

		obs_sceneitem_t* groupItem = obs_scene_find_source(scene, srcGroupName.toStdString().c_str());

		if (!groupItem)
		{
			qDebug() << __FUNCTION__ << __LINE__ << "obs_scene_find_source() got NULL";
			return false;
		}
		else
		{
			auto enumSourcesByGroupFunc = [](obs_scene_t*, obs_sceneitem_t* groupMemberItem, void* param)
			{
				if (!param)
				{
					qDebug() << __FUNCTION__ << __LINE__ << "Err: param is NULL!";
					return false;
				}

				GroupItemInfo *groupItemInfo = reinterpret_cast<GroupItemInfo*>(param);

				int64_t sceneItemId = obs_sceneitem_get_id(groupMemberItem);

				if (sceneItemId == groupItemInfo->sceneItemId)
				{
					groupItemInfo->item = groupMemberItem;
				}

				return true;
			};

			GroupItemInfo groupItemInfo;
			groupItemInfo.sceneItemId = sceneItemId;

			obs_sceneitem_group_enum_items(groupItem, enumSourcesByGroupFunc, &groupItemInfo);

			if (groupItemInfo.item)
			{
				item = groupItemInfo.item;
			}
		}
	}
	
	//ToDo: Verify whether that is needed, then we would need another parameter in the api request
	//const char *srcId = obs_source_get_id(source);
	//if (sourceIdStr != srcId)
	//{
	//    qDebug() << __FUNCTION__ << __LINE__ << "source identifier not match," << "expect: " << sourceIdStr << "actual:"  << srcId;
	//    return false;
	//}

	bool hasToggled = false;

	bool setFlag = IsSourceVisible(item);
	qDebug() << __FUNCTION__ << __LINE__ << sceneName << srcName << sceneItemId << "set normal source: " << !setFlag;

	if (!setFlag && toggleInfo == ToggleInfo::Deactivate)
	{
		hasToggled = false;
	}
	else if (setFlag && toggleInfo == ToggleInfo::Activate)
	{
		hasToggled = false;
	}
	else
	{
		hasToggled = obs_sceneitem_set_visible(item, !setFlag);
	}

	return hasToggled;
}

bool ActionHelp::MuteMixerSource(QString inSourceId, ToggleInfo toggleInfo)
{
	QString collectionName = GetCurrentSceneCollectionName();

	QString srcName = inSourceId;
	srcName.remove(0, collectionName.size());

	obs_source_t *src = obs_get_source_by_name(srcName.toStdString().c_str());

	if (src == NULL)
	{
		qDebug() << __FUNCTION__ << "Err: obs_get_source_by_name() got NULL!";
		return false;
	}

	bool setFlag = obs_source_muted(src);

	if (setFlag && toggleInfo == ToggleInfo::Deactivate)
	{
		return false;
	}
	else if (!setFlag && toggleInfo == ToggleInfo::Activate)
	{
		return false;
	}

	obs_source_set_muted(src, !setFlag);
	obs_source_release(src);  // use obs_source_release to release it when complete.
	return true;
}

bool ActionHelp::IsSourceVisible(obs_sceneitem_t* inItem)
{
	return obs_sceneitem_visible(inItem);
}

bool ActionHelp::RequestStartRecording()
{
	if (!obs_frontend_recording_active())
	{
		obs_frontend_recording_start();
		return true;
	}

	return false;
}

bool ActionHelp::RequestStopRecording()
{
	if (obs_frontend_recording_active())
	{
		obs_frontend_recording_stop();

		return true;
	}

	return false;
}

bool ActionHelp::RequestStartStreaming()
{
	if (!obs_frontend_streaming_active())
	{
		obs_frontend_streaming_start();

		if (obs_frontend_recording_active())
		{
			json responseJson;
			responseJson["jsonrpc"] = "2.0";
			responseJson["id"] = RPC_ID_startRecording;

			std::string str = responseJson.dump() + "\n";
			WriteToSocket(str);
		}

		return true;
	}

	return false;
}

bool ActionHelp::RequestStopStreaming()
{
	if (obs_frontend_streaming_active())
	{
		obs_frontend_streaming_stop();

		if (!obs_frontend_streaming_active())
		{
			json responseJson;
			responseJson["jsonrpc"] = "2.0";
			responseJson["id"] = RPC_ID_stopRecording;

			std::string str = responseJson.dump() + "\n";
			WriteToSocket(str);
		}

		return true;
	}

	return false;
}

bool ActionHelp::RequestSceneListUpdate(QString inCollectionName, QList<SceneInfo>& outSceneList)
{
	QString currentCollectionName, currentSceneName;
	if (!GetCurrentCollectionAndSceneName(currentCollectionName, currentSceneName))
		return false;

	bool isSuccessful = currentCollectionName == inCollectionName;

	if (!isSuccessful)
	{
		// ensure in correct scene collection
		isSuccessful = SelectSceneCollection(inCollectionName);
	}

	if (isSuccessful)
	{
		UpdateScenesList(outSceneList);

		SelectSceneCollection(currentCollectionName);
	}

	return isSuccessful;
}

bool ActionHelp::RequestSourcesListUpdate(QString inCollectionName, QList<SourceInfo>& outSourceList)
{
	QString currentCollectionName, sceneName;
	if (!GetCurrentCollectionAndSceneName(currentCollectionName, sceneName))
		return false;

	bool isSuccessful = currentCollectionName == inCollectionName;

	if (!isSuccessful)
	{
		// ensure in correct scene collection
		isSuccessful = SelectSceneCollection(inCollectionName);
	}

	if (isSuccessful)
	{
		UpdateSourcesList(outSourceList);

	}

	SelectSceneCollection(currentCollectionName);

	return isSuccessful;
}
