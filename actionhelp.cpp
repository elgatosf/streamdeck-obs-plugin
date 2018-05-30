#include "actionhelp.h"
#include <QDebug>
#include <QThread>
#include <QTcpServer>
#include <QObject>
#include <QDataStream>

// ----------------------------------------------------------------------------
extern QTcpServer *tcpServer;


// ----------------------------------------------------------------------------
ActionHelp::ActionHelp(QObject *parent) : QObject(parent), sendNotifyFlag(true)
{

}

// ----------------------------------------------------------------------------
// Public functions
// ----------------------------------------------------------------------------
bool ActionHelp::getSendNotifyFlag()
{
    return sendNotifyFlag;
}

QString ActionHelp::getCurrentSceneCollectionName()
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

QString ActionHelp::getCurrentSceneName()
{
    // get current scene name
    obs_source_t *current_scene = obs_frontend_get_current_scene();
    if (!current_scene)
    {
        qDebug() << __FUNCTION__ << "Err: obs_frontend_get_current_scene() got NULL!!";
        return "";
    }

    QString current_sceneName = obs_source_get_name(current_scene);
    obs_source_release(current_scene);

    return current_sceneName;
}

bool ActionHelp::getCurrentCollectionAndSceneName(QString &scName, QString&sceneName)
{
    scName = getCurrentSceneCollectionName();
    sceneName = getCurrentSceneName();

    if (scName.isEmpty() || sceneName.isEmpty())
    {
        qDebug() << __FUNCTION__ << "scName or sceneName is empty!!!";
        return false;
    }

    return true;
}

void ActionHelp::updateSceneCollectionList(QStringList &list)
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

void ActionHelp::updateScenesList(QList<SceneInfo> &list)
{
    list.clear();

    // Enumerate scenes for current scene collection
    struct obs_frontend_source_list scenes = {};
    obs_frontend_get_scenes(&scenes);

    for (size_t i = 0 ; i < scenes.sources.num ; i++) 
	{
		auto sceneEntry = scenes.sources.array[i];

        SceneInfo sceneInfo = {};
        sceneInfo.scene = sceneEntry;

		std::string sceneName = obs_source_get_name(sceneEntry);

		obs_scene_t *scene = obs_scene_from_source(sceneEntry);
		if (!scene)
		{
			QString errStr = "Err: obs_scene_from_source(sceneSource) return NULL!";
			qDebug() << errStr;
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
			}

			SceneItemInfo sceneItemInfo = {};
			sceneItemInfo.sceneItemId = sceneItemId;
			sceneItemInfo.sourceName = obs_source_get_name(source);
			sceneItemInfo.isVisible = obs_sceneitem_visible(item);
			list->append(sceneItemInfo);
			return true;
		};

		QList<SceneItemInfo>  sceneItems;
		obs_scene_enum_items(scene, enumFunc, &sceneItems);

		sceneInfo.sceneItems = sceneItems;

        list.append(sceneInfo);
    }

    obs_frontend_source_list_free(&scenes);
}

void ActionHelp::updateSourcesList(QString sceneName, QList<SourceInfo> &list, QString &errStr)
{
    list.clear();

	if (sceneName.isEmpty())
	{
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
			obsSource.name = obs_source_get_name(source);
			obsSource.type = obs_source_get_type(source);
			obsSource.idStr = obs_source_get_id(source);
			const char* displayName = obs_source_get_display_name(obsSource.idStr.c_str());
			if (displayName)
				obsSource.displayName = displayName;

			list->append(obsSource);
			//            qDebug() << __FUNCTION__ << obsSource.name.c_str() << obsSource.idStr.c_str();
			
			return true;
		};

		obs_enum_sources(enumFunc, &list);

		//find appropriate scene name
		for (auto& obsSource : list)
		{
			//find scene name of source
			QList<SceneInfo> sceneList;

			updateScenesList(sceneList);

			for (auto sceneInList : sceneList)
			{
				auto sceneAsSource = sceneInList.scene;

				if (!sceneAsSource)
				{
					qDebug() << __FUNCTION__ << __LINE__ << "can't find match scene!";
					continue;
				}

				obs_scene_t* scene = obs_scene_from_source(sceneAsSource);
				if (!scene)
				{
					qDebug() << __FUNCTION__ << __LINE__ << "not a scene!";
					continue;
				}

				obs_sceneitem_t* item = obs_scene_find_source(scene, obsSource.name.c_str());
				if (!item)
				{
					qDebug() << __FUNCTION__ << __LINE__ << "obs_scene_find_source() got NULL";
					continue;
				}

				obs_source_t *source = obs_sceneitem_get_source(item);
				auto type = obs_source_get_type(source);
				auto idStr = obs_source_get_id(source);
				auto name = obs_source_get_name(source);

				if (obsSource.name == name
					&& obsSource.idStr == idStr
					&& obsSource.type == type)
				{
					obsSource.sceneName = sceneInList.name;
					break;
				}
			}
		}
	}
	else 
	{
        // enum source in scene

        bool find = false;
        obs_source_t *sceneSource = NULL;
        errStr.clear();

        // 1. find scene's source
        // Enumerate scenes for current scene collection
        QList<SceneInfo> sceneList;
        updateScenesList(sceneList);

        for (int i=0; i<sceneList.count(); i++)
        {
            sceneSource = sceneList.at(i).scene;
            if (sceneSource)
            {
                if (obs_source_get_name(sceneSource) == sceneName)
                {
                    find = true;
                    break;
                }
            }
        }

        if (!find)
        {
            errStr = QString("Err: not find match name: %1").arg(sceneName);
            qDebug() << errStr;
            return;
        }
        
        // 2. get scene from scene's source
        obs_scene_t *scene = obs_scene_from_source(sceneSource);
        if (!scene)
        {
            errStr = "Err: obs_scene_from_source(sceneSource) return NULL!";
            qDebug() << errStr;
            return;
        }
        
        // 3. enum items by scene
        auto enumFunc = [] (obs_scene_t*, obs_sceneitem_t* item, void* param)
        {
            if (!param)
            {
                qDebug() << __FUNCTION__ << __LINE__ << "Err: param is NULL!";
                return false;
            }
            
            QList<SourceInfo> *list = reinterpret_cast<QList<SourceInfo>*>(param);

            // Get source

            obs_source_t *source = obs_sceneitem_get_source(item);
            if (!source)
            {
                qDebug() << __FUNCTION__ << __LINE__ << "Err: obs_sceneitem_get_source(sceneSource) return NULL!";
                return false;
            }

            SourceInfo obsSource = {};
            obsSource.source      = source;
            obsSource.name        = obs_source_get_name(source);
            obsSource.type        = obs_source_get_type(source);
			obsSource.idStr		  = obs_source_get_id(source);
			//obsSource.sceneItemId = sceneItemId;

			const char* displayName = obs_source_get_display_name(obsSource.idStr.c_str());
			if (displayName)
				obsSource.displayName = displayName;

            list->append(obsSource);
            return true;
        };

        list.clear();
        obs_scene_enum_items(scene, enumFunc, &list);

		//add given scene name
		for (auto& obsSource : list)
		{
			obsSource.sceneName = sceneName.toStdString();
		}
    }
}

// ----------------------------------------------------------------------------
// Slot functions
// ----------------------------------------------------------------------------
//void ActionHelp::reqUpdateSCList()
//{
//	sendNotifyFlag = false;
//
//	QStringList list;
//	updateSceneCollectionList(list);
//
//	QString currScName = getCurrentSceneCollectionName();
//	if (currScName.isEmpty())
//	{
//		qDebug() << __FUNCTION__ << "Err: obs_frontend_get_current_scene_collection() got NULL";
//		currScName = list.first();
//	}
//
//	QByteArray buf;
//	//ipcThreadPtr->fillDataBuf(buf, list, currScName);
//	//ipcThreadPtr->sendCmdToList(ShmId_StreamDeck, buf, SDIPCCMD_Req_OBS_SCList);
//
//	sendNotifyFlag = true;
//}

void ActionHelp::reqVersion()
{
	sendNotifyFlag = false;

	QStringList list;
	auto versionInfo = VERSION_STR;

	list.append(versionInfo);
	
	QByteArray buf;
	//ipcThreadPtr->fillDataBuf(buf, list);
	//ipcThreadPtr->sendCmdToList(ShmId_StreamDeck, buf, SDIPCCMD_Req_VerInfo);

	sendNotifyFlag = true;
}

bool ActionHelp::reqUpdateSceneList(QString inCollectionName, QList<SceneInfo>& outSceneList)
{
	QString currentCollectionName, currentSceneName;
	if (!getCurrentCollectionAndSceneName(currentCollectionName, currentSceneName))
		return false;

	bool isSuccessful = currentCollectionName == inCollectionName;

	if (!isSuccessful)
	{
		// ensure in correct scene collection
		isSuccessful = SelectSceneCollection(inCollectionName);
	}

	if (isSuccessful)
	{
		ActionHelp::updateScenesList(outSceneList);

		SelectSceneCollection(currentCollectionName);
	}

	return isSuccessful;
}

void ActionHelp::reqUpdateSourcesList(QString inCollectionName, QString inSceneName)
{
    sendNotifyFlag = false;

	QString currentCollectionName, sceneName;
	if (!getCurrentCollectionAndSceneName(currentCollectionName, sceneName))
		return;

	// ensure in correct scene collection
	SelectSceneCollection(inCollectionName);

    QList<SourceInfo> list;
    QString errStr;
    updateSourcesList(inSceneName, list, errStr);

	SelectSceneCollection(currentCollectionName);

    QByteArray buf;
    //ipcThreadPtr->fillDataBuf(buf, errStr, list);
    //ipcThreadPtr->sendCmdToList(ShmId_StreamDeck, buf, SDIPCCMD_Req_OBS_SourceList);

    sendNotifyFlag = true;
}

void ActionHelp::reqUpdateSourcesListOfAll(QString scName)
{
    sendNotifyFlag = false;

	QString currentCollectionName, sceneName;
	if (!getCurrentCollectionAndSceneName(currentCollectionName, sceneName))
		return;

    // ensure in correct scene collection
    SelectSceneCollection(scName);
	
    QList<SourceInfo> sourceStrList;
    QString errStr;

    updateSourcesList("", sourceStrList, errStr);

    QByteArray buf;
    //ipcThreadPtr->fillDataBuf(buf, errStr, sourceStrList);
    //ipcThreadPtr->sendCmdToList(ShmId_StreamDeck, buf, SDIPCCMD_Req_OBS_SourceListOfAll);

	SelectSceneCollection(currentCollectionName);

    sendNotifyFlag = true;
}

//void ActionHelp::reqSelectScene(QString scName, QString sceneName)
//{
//    sendNotifyFlag = false;
//
//    QString errStr;
//    bool isSelected = selectScene(scName, sceneName);
//
//    sendNotifyFlag = true;
//
//	QStringList list;
//	list << scName << sceneName;

	QByteArray buf;
	//ipcThreadPtr->fillDataBuf(buf, list);

	//if (isSelected)
	//{
	//	ipcThreadPtr->sendCmdToList(ShmId_StreamDeck, buf, SDIPCCMD_Req_OBS_CurrentCollectionAndSceneName);
	//}
	//else
	//{
	//	ipcThreadPtr->sendCmdToList(ShmId_StreamDeck, buf, SDIPCCMD_Select_OBS_Scene_Error);
	//}
//}

void ActionHelp::reqToggleSource(bool isMixerSrc, QString scName, QString sceneName, QString sourceName, QString sourceIdStr, int sceneItemId, int toggleInfo)
{
    sendNotifyFlag = false;

	bool isToggled = false;

	if (scName == getCurrentSceneCollectionName())
	{
		isToggled = toggleSource(isMixerSrc, sceneName, sourceName, sourceIdStr, (int64_t)sceneItemId, (ToggleInfo) toggleInfo);
	}
    else
    {
        qDebug() << __FUNCTION__ << "ignore request, because the source is not in current collection.";
	}

    sendNotifyFlag = true;

	if (isToggled)
	{
		// since mute / unmute doesn't callback
		reqSourcesState(isMixerSrc, scName, sceneName, sourceName, sourceIdStr, sceneItemId);
	}
	else
	{
		QStringList list;
		QString isMixerSrcStr = QString("%1").arg(isMixerSrc);

		list << isMixerSrcStr << scName << sceneName << sourceName << sourceIdStr << QString::number(sceneItemId);

		qDebug() << __FUNCTION__ << list;

		QByteArray buf;
		//ipcThreadPtr->fillDataBuf(buf, list);
		//ipcThreadPtr->sendCmdToList(ShmId_StreamDeck, buf, SDIPCCMD_Toggle_OBS_Source_Error);
	}
}


//void ActionHelp::reqToggleRecord(json* inResponse)
//{
//	sendNotifyFlag = false;
//
//	if (obs_frontend_recording_active())
//	{
//		obs_frontend_recording_stop();
//
//		json refResponse = &inResponse;
//
//		refResponse["id"] = RPC_ID_startRecording;
//		std::string str = refResponse.dump() + "\n";
//		WriteToSocket(str);
//	}
//	else
//	{
//		obs_frontend_recording_start();
//		//ipcThreadPtr->onNotify(ShmId_StreamDeck, QStringList("recording_started"));
//	}
//
//	sendNotifyFlag = true;
//}

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

//void ActionHelp::reqToggleStream(json* inResponse)
//{
//	sendNotifyFlag = false;
//
//	if (obs_frontend_streaming_active())
//	{
//		obs_frontend_streaming_stop();
//
//		if (!obs_frontend_recording_active())
//		{
//			//ipcThreadPtr->onNotify(ShmId_StreamDeck, QStringList("recording_stopped"));
//		}
//
//		//ipcThreadPtr->onNotify(ShmId_StreamDeck, QStringList("streaming_stopped"));
//	}
//	else
//	{
//		obs_frontend_streaming_start();
//
//		if (obs_frontend_recording_active())
//		{
//			//ipcThreadPtr->onNotify(ShmId_StreamDeck, QStringList("recording_started"));
//		}
//
//		//ipcThreadPtr->onNotify(ShmId_StreamDeck, QStringList("streaming_started"));
//	}
//
//	sendNotifyFlag = true;
//}

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

void ActionHelp::NotifySceneSwitched()
{
    qDebug() << __FUNCTION__ << __LINE__;

    QString scName, sceneName;
    if (!getCurrentCollectionAndSceneName(scName, sceneName))
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
    if (!getCurrentCollectionAndSceneName(scName, sceneName))
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

void ActionHelp::reqSourcesState(bool isMixerSrc, QString scName, QString sceneName, QString sourceName, QString sourceIdStr, int sceneItemId)
{
    bool flag = isSourceVisible(isMixerSrc, scName, sceneName, sourceName, sourceIdStr, (int64_t) sceneItemId);

    QStringList list;
    QString isMixerSrcStr = QString("%1").arg(isMixerSrc);
    QString flagStr = QString("%1").arg(flag);

    list << isMixerSrcStr << scName << sceneName << sourceName << sourceIdStr << QString::number(sceneItemId);

    qDebug() << __FUNCTION__ << list << flagStr;

    QByteArray buf;
    //ipcThreadPtr->fillDataBuf(buf, list, flagStr);
    //ipcThreadPtr->sendCmdToList(ShmId_StreamDeck, buf, SDIPCCMD_Req_OBS_SourceState);
}

bool ActionHelp::SelectSceneCollection(QString scName)
{   
    QString curr_scName = getCurrentSceneCollectionName();
    if (curr_scName.isEmpty())
    {
        qDebug() << __FUNCTION__ << "Err: obs_frontend_get_current_scene_collection() got NULL!!";
        return false;
    }

    if (curr_scName!=scName)
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
	if (!getCurrentCollectionAndSceneName(scName, currentSceneName))
		return false;

	if (currentSceneName.isEmpty())
    {
        errStr = "Err: obs_frontend_get_current_scene() got NULL!";
        qDebug() << errStr;
        return false;
    }

	//ToDo: Find better solution using real Id for scene
	sceneName.remove(0, scName.size());

    if (currentSceneName ==sceneName)
        return true;

    // update info
    QList<SceneInfo> sceneList;
    updateScenesList(sceneList);

    for (int i = 0 ; i < sceneList.count() ; i++)
    {
        SceneInfo sceneInfo = sceneList.at(i);
        if (sceneInfo.name.c_str() == sceneName)
        {
            qDebug() << __FUNCTION__ << QThread::currentThread() << QString("obs_frontend_set_current_scene(%1)").arg(sceneName);

            obs_frontend_set_current_scene(sceneInfo.scene);
            return true;
        }
    }

    // can't find match scene in list
    errStr = "can't find match scene name in list!";
    qDebug() << errStr;
    return false;
}

bool ActionHelp::toggleSource(bool isMixerSrc, QString sceneName, QString srcName, QString sourceIdStr, int64_t sceneItemId, ToggleInfo toggleInfo)
{
    qDebug() << __FUNCTION__ << __LINE__ << sceneName << srcName << sourceIdStr << sceneItemId;

    if (isMixerSrc)
    {
        if (sourceIdStr=="coreaudio_output_capture" ||   // mac
            sourceIdStr=="coreaudio_input_capture"  ||   // mac
            sourceIdStr=="wasapi_output_capture"    ||   // win
            sourceIdStr=="wasapi_input_capture")         // win
        {
            // since Mic/Aux not belong to any scene.

            obs_source_t *src = obs_get_source_by_name(srcName.toStdString().c_str());
            bool setFlag = obs_source_muted(src);
            OBS_SOURCE_TYPE srcType = getSourceType(sourceIdStr.toStdString());

            qDebug() << __FUNCTION__ << __LINE__ << sceneName << srcName << sourceIdStr << !setFlag << "is mixer source: " << isMixerSource(srcType);

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
    }


    QList<SceneInfo> sceneList;
    updateScenesList(sceneList);

    obs_source_t *sceneAsSource = NULL;
	for (int i = 0; i<sceneList.count(); i++)
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

    obs_sceneitem_t* item = obs_scene_find_sceneitem_by_id(scene, sceneItemId);
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

    const char *srcId = obs_source_get_id(source);
    if (sourceIdStr != srcId)
    {
        qDebug() << __FUNCTION__ << __LINE__ << "source identifier not match," << "expect: " << sourceIdStr << "actual:"  << srcId;
        return false;
    }

	bool hasToggled = false;

    if (isMixerSrc)
    {
        bool setFlag = obs_source_muted(source);
        qDebug() << __FUNCTION__ << __LINE__ << sceneName << srcName << sourceIdStr << "set mixer source: " << !setFlag;


		if (setFlag && toggleInfo == ToggleInfo::Deactivate)
		{
			hasToggled = false;
		}
		else if (!setFlag && toggleInfo == ToggleInfo::Activate)
		{
			hasToggled = false;
		}
		else
		{
			obs_source_set_muted(source, !setFlag);
			hasToggled = true;
		}
    }
    else
    {
        bool setFlag = isSourceVisible(isMixerSrc, getCurrentSceneCollectionName(), sceneName, srcName, sourceIdStr, sceneItemId);
        qDebug() << __FUNCTION__ << __LINE__ << sceneName << srcName << sourceIdStr << sceneItemId << "set normal source: " << !setFlag;
       
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
		
    }

	return hasToggled;
}

bool ActionHelp::isSourceVisible(bool isMixerSrc, QString scName, QString sceneName, QString sourceName, QString sourceIdStr, int64_t sceneItemId)
{
    if (scName!=getCurrentSceneCollectionName())
    {
        qDebug() << __FUNCTION__ << __LINE__ << "scene collection not match, alway invisible!";
        return false;
    }


    if (isMixerSrc)
    {
        if (sourceIdStr=="coreaudio_output_capture" || // mac
            sourceIdStr=="coreaudio_input_capture"  || // mac
            sourceIdStr=="wasapi_output_capture"    || // win
            sourceIdStr=="wasapi_input_capture")       // win
        {
            // since Mic/Aux not belong to any scene.
            obs_source_t *src = obs_get_source_by_name(sourceName.toStdString().c_str());
            bool ret = !obs_source_muted(src);
            obs_source_release(src);  // use obs_source_release to release it when complete.

            return ret;
        }
    }


    QList<SceneInfo> sceneList;
    updateScenesList(sceneList);

    obs_source_t *sceneAsSource = NULL;
    for (int i = 0 ; i < sceneList.count() ; i++)
	{
        if (sceneName==sceneList.at(i).name.c_str()) 
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

	obs_sceneitem_t* item = obs_scene_find_sceneitem_by_id(scene, sceneItemId);
	if (!item)
	{
		qDebug() << __FUNCTION__ << __LINE__ << "obs_scene_find_sceneitem_by_id() got NULL";

		item = obs_scene_find_source(scene, sourceName.toStdString().c_str());
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

    const char *srcId = obs_source_get_id(source);
    if (sourceIdStr != srcId)
    {
        qDebug() << __FUNCTION__ << __LINE__ << "source identifier not match," << "expect: " << sourceIdStr << "actual:"  << srcId;
        return false;
    }

    if (isMixerSrc)
        return !obs_source_muted(source);
    else
        return obs_sceneitem_visible(item);
}

// ----------------------------------------------------------------------------
// Private functions
// ----------------------------------------------------------------------------
int ActionHelp::isMixerSource(OBS_SOURCE_TYPE srcType)
{
    switch (srcType)
    {
		case OBS_SOURCE_TYPE_AUDIO_INPUT_CAPTURE:
		case OBS_SOURCE_TYPE_AUDIO_OUTPUT_CAPTURE:
		case OBS_SOURCE_TYPE_JACKIN_CLIENT:
		case OBS_SOURCE_TYPE_MEDIA_SOURCE:
		case OBS_SOURCE_TYPE_VLC_VIDEO_SOURCE:
		case OBS_SOURCE_TYPE_NDI_SOURCE:

#if defined(Q_OS_WIN64) || defined(Q_OS_WIN32)
		case OBS_SOURCE_TYPE_VIDEO_CAPTURE_DEVICE:
#endif
			return 1;

		case OBS_SOURCE_TYPE_IMAGE:
#if defined(Q_OS_MAC)
		case OBS_SOURCE_TYPE_VIDEO_CAPTURE_DEVICE:
#endif
		case OBS_SOURCE_TYPE_GAME_CAPTURE:
		case OBS_SOURCE_TYPE_TEXT:
		case OBS_SOURCE_TYPE_WINDOW_CAPTURE:
		case OBS_SOURCE_TYPE_BROWSER_SOURCE:
		case OBS_SOURCE_TYPE_UNKNOWN:
			return 0;

		default:
			qDebug() << __FUNCTION__ << "unknow type!";
			return 0;
    }
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

			sendNotifyFlag = false;

			switch (rpcID)
			{
			case RPC_ID_startStreaming:
			{
				if (RequestStartStreaming())
				{
					std::string str = responseJson.dump() + "\n";
					WriteToSocket(str);
				}
			}
			break;
			case RPC_ID_stopStreaming:
			{
				if (RequestStopStreaming())
				{
					std::string str = responseJson.dump() + "\n";
					WriteToSocket(str);
				}
			}
			break;

			case RPC_ID_startRecording:
			{
				if (RequestStartRecording())
				{
					std::string str = responseJson.dump() + "\n";
					WriteToSocket(str);
				}
			}
			break;

			case RPC_ID_stopRecording:
			{
				if (RequestStopRecording())
				{
					std::string str = responseJson.dump() + "\n";
					WriteToSocket(str);
				}
			}
			break;

			case RPC_ID_getRecordingAndStreamingState:
			{
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
					result["recordingStatus"] = "live";
				}
				else
				{
					result["recordingStatus"] = "offline";
				}
				responseJson["result"] = result;

				std::string str = responseJson.dump() + "\n";
				WriteToSocket(str);
			}

			break;

			case RPC_ID_fetchSceneCollectionsSchema:
			{
				json data = json::array();

				QStringList list;
				updateSceneCollectionList(list);

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

			}
			break;

			case RPC_ID_makeCollectionActive:
			{
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
			}
			break;

			case RPC_ID_makeSceneActive:
			{
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
			}
			break;

			case RPC_ID_getScenes:
			{
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
								collectionName = getCurrentSceneCollectionName();
							}
							else
							{
								collectionName = QString(JSONUtils::GetString(args[0]).c_str());
							}

							QList<SceneInfo> list;
							if (reqUpdateSceneList(collectionName, list))
							{
								for (const auto& i : list)
								{
									auto nodesArray = json::array();

									for (const auto& j : i.sceneItems)
									{
										json sceneItem = json::object();
										sceneItem["sourceId"] = j.sourceName;
										sceneItem["sceneItemId"] = (int) j.sceneItemId;
										sceneItem["visible"] = j.isVisible;
									
										nodesArray.push_back(sceneItem);
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

			}
			break;

			case RPC_ID_getActiveCollection:
			{
				QString activeCollection = getCurrentSceneCollectionName();
				result["id"] = activeCollection.toStdString();
				responseJson["result"] = result;

				std::string str = responseJson.dump() + "\n";
				WriteToSocket(str);
			}
			break;

			case RPC_ID_getActiveSceneId:
			{
				QString activeCollection = getCurrentSceneCollectionName();
				QString activeSceneName = getCurrentSceneName();
				responseJson["result"] = activeCollection.toStdString() + activeSceneName.toStdString();
				std::string str = responseJson.dump() + "\n";
				WriteToSocket(str);
			}
			break;
		}

		sendNotifyFlag = true;

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

void ActionHelp::WriteToSocket(const std::string &inString)
{
	if (mSocket 
		&& mSocket->isValid())
	{
		mSocket->write(inString.c_str());
	}
}

OBS_SOURCE_TYPE ActionHelp::getSourceType(const std::string& idStr)
{
    // Audio input
    if (idStr == "wasapi_input_capture"    || // Windows
        idStr == "coreaudio_input_capture" || // macOS
        idStr == "pulse_input_capture"     ||
        idStr == "alsa_input_capture")
    {
        return OBS_SOURCE_TYPE_AUDIO_INPUT_CAPTURE;
    }

    // Audio output
    if (idStr == "wasapi_output_capture"    || // Windows
        idStr == "coreaudio_output_capture" || // macOS
        idStr == "pulse_output_capture")
    {
        return OBS_SOURCE_TYPE_AUDIO_OUTPUT_CAPTURE;
    }

    // Image
    else if (idStr == "image_source" ||
             idStr == "slideshow")
    {
        return OBS_SOURCE_TYPE_IMAGE;
    }

    // Video Capture
    else if (idStr == "dshow_input" ||    // Windows
             idStr == "av_capture_input") // Mac
    {
        return OBS_SOURCE_TYPE_VIDEO_CAPTURE_DEVICE;
    }

    // Game Capture
    else if (idStr == "game_capture" ||   // Windows
             idStr == "syphon-input")     // Mac
    {
        return OBS_SOURCE_TYPE_GAME_CAPTURE;
    }

    // Media Source
    else if (idStr == "ffmpeg_source")
    {
        return OBS_SOURCE_TYPE_MEDIA_SOURCE;
    }

    // VLC Video Source
    else if (idStr == "vlc_source")
    {
        return OBS_SOURCE_TYPE_VLC_VIDEO_SOURCE;
    }

    // Text
    else if (idStr == "text_gdiplus" ||
             idStr == "text_ft2_source")
    {
        return OBS_SOURCE_TYPE_TEXT;
    }

    // Windows, display, monitor
    else if (idStr == "window_capture"  ||
             idStr == "display_capture" ||
             idStr == "monitor_capture")
    {
        return OBS_SOURCE_TYPE_WINDOW_CAPTURE;
    }

    // Browser Source
    else if (idStr == "browser_source")
    {
        return OBS_SOURCE_TYPE_BROWSER_SOURCE;
    }

    // JACK Input Client
    else if (idStr == "jack_output_capture")
    {
        return OBS_SOURCE_TYPE_JACKIN_CLIENT;
    }

	// NDI source
	else if (idStr == "ndi_source")
	{
		return OBS_SOURCE_TYPE_NDI_SOURCE;
	}


    return OBS_SOURCE_TYPE_UNKNOWN;
}
