#include "actionhelp.h"
#include "ipc_thread.h"
#include <QDebug>
#include <QDateTime>

#include <graphics/matrix4.h>
#if defined(Q_OS_WIN64) || defined(Q_OS_WIN32)
    #include <w32-pthreads/pthread.h>
#endif

// ----------------------------------------------------------------------------
extern IPC_Thread *ipcThreadPtr;


// ----------------------------------------------------------------------------
ActionHelp::ActionHelp(QObject *parent) :
    QObject(parent),
    sendNotifyFlag(true)
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
    if (!curr_scName) {
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
    if (!current_scene) {
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

    if (scName.isEmpty() || sceneName.isEmpty()) {
        qDebug() << __FUNCTION__ << "scName or sceneName is empty!!!";
        return false;
    }

    return true;
}

void ActionHelp::updateSceneCollectionList(QStringList &list)
{
    list.clear();

    char **strList = obs_frontend_get_scene_collections();

    if (!strList) {
        qDebug() << __FUNCTION__ << "Err: call obs_frontend_get_scene_collections() got NULL!";
        return;
    }

    for (int i=0; strList[i]; i++) {
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


	auto selectedSceneName = ActionHelp::getCurrentSceneName();

    for (size_t i=0; i<scenes.sources.num; i++) 
	{
        SceneInfo sceneInfo = {};
        sceneInfo.scene = scenes.sources.array[i];

		std::string sceneName = obs_source_get_name(scenes.sources.array[i]);

		sceneInfo.name = sceneName;
		sceneInfo.isSelected = selectedSceneName.toStdString() == sceneName;

        list.append(sceneInfo);
    }

    obs_frontend_source_list_free(&scenes);
}

void ActionHelp::updateSourcesList(QString sceneName, QList<SourceInfo> &list, QString &errStr)
{
    list.clear();
    #if 0
    EXPORT obs_source_t *obs_frontend_get_current_scene(void);
    ==> obs_source_release(current_scene); <==

    /** Gets the scene from its source, or NULL if not a scene */
    EXPORT obs_scene_t *obs_scene_from_source(const obs_source_t *source);

    /** Enumerates sources within a scene */
    EXPORT void obs_scene_enum_items(obs_scene_t *scene,
                                     bool (*callback)(obs_scene_t*, obs_sceneitem_t*, void*),
                                     void *param);
    #endif


    if (sceneName.isEmpty()) {
        // enum all source items

        auto enumFunc = [](void* param, obs_source_t* source)
        {
            if (!param) {
                qDebug() << __FUNCTION__ << __LINE__ << "Err: param is NULL!";
                return false;
            }
            QList<SourceInfo> *list = reinterpret_cast<QList<SourceInfo>*>(param);

            // Get source
            SourceInfo obsSource = {};
            obsSource.sceneName   = ActionHelp::getCurrentSceneName().toStdString();
            obsSource.source      = source;
            obsSource.name        = obs_source_get_name(source);
            obsSource.type        = obs_source_get_type(source);
            obsSource.idStr       = obs_source_get_id(source);
			const char* displayName = obs_source_get_display_name(obsSource.idStr.c_str());
			if(displayName)
				obsSource.displayName = displayName;

            list->append(obsSource);
//            qDebug() << __FUNCTION__ << obsSource.name.c_str() << obsSource.idStr.c_str();
            return true;
        };

        obs_enum_sources(enumFunc, &list);

    } else {
        // enum source in scene

        bool find = false;
        obs_source_t *sceneSource = NULL;
        errStr.clear();

        // 1. find scene's source
        // Enumerate scenes for current scene collection
        QList<SceneInfo> sceneList;
        updateScenesList(sceneList);

        for (int i=0; i<sceneList.count(); i++) {
            sceneSource = sceneList.at(i).scene;
            if (sceneSource) {
                if (obs_source_get_name(sceneSource) == sceneName) {
                    find = true;
                    break;
                }
            }
        }

        if (!find) {
            errStr = QString("Err: not find match name: %1").arg(sceneName);
            qDebug() << errStr;
            return;
        }
        // 2. get scene from scene's source
        obs_scene_t *scene = obs_scene_from_source(sceneSource);
        if (!scene) {
            errStr = "Err: obs_scene_from_source(sceneSource) return NULL!";
            qDebug() << errStr;
            return;
        }
        // 3. enum items by scene
        auto enumFunc = [] (obs_scene_t*, obs_sceneitem_t* item, void* param)
        {
            if (!param) {
                qDebug() << __FUNCTION__ << __LINE__ << "Err: param is NULL!";
                return false;
            }
            QList<SourceInfo> *list = reinterpret_cast<QList<SourceInfo>*>(param);

            // Get source
			int64_t sceneItemId = obs_sceneitem_get_id(item);

            obs_source_t *source = obs_sceneitem_get_source(item);
            if (!source) {
                qDebug() << __FUNCTION__ << __LINE__ << "Err: obs_sceneitem_get_source(sceneSource) return NULL!";
                return false;
            }

            SourceInfo obsSource = {};
            obsSource.sceneName   = ActionHelp::getCurrentSceneName().toStdString();
            obsSource.source      = source;
            obsSource.name        = obs_source_get_name(source);
            obsSource.type        = obs_source_get_type(source);
			obsSource.idStr		  = obs_source_get_id(source);
			obsSource.sceneItemId = sceneItemId;

			const char* displayName = obs_source_get_display_name(obsSource.idStr.c_str());
			if (displayName)
				obsSource.displayName = displayName;

            list->append(obsSource);
            return true;
        };

        list.clear();
        obs_scene_enum_items(scene, enumFunc, &list);
    }
}

// ----------------------------------------------------------------------------
// Slot functions
// ----------------------------------------------------------------------------
void ActionHelp::reqUpdateSCList()
{
    sendNotifyFlag = false;

    QStringList list;
    updateSceneCollectionList(list);

    QString currScName = getCurrentSceneCollectionName();
    if (currScName.isEmpty()) {
        qDebug() << __FUNCTION__ << "Err: obs_frontend_get_current_scene_collection() got NULL";
        currScName = list.first();
    }

    QByteArray buf;
    ipcThreadPtr->fillDataBuf(buf, list, currScName);
    ipcThreadPtr->sendCmdToList(ShmId_StreamDeck, buf, SDIPCCMD_Req_OBS_SCList);

    sendNotifyFlag = true;
}

void ActionHelp::reqUpdateSceneList(QString scName)
{
    sendNotifyFlag = false;

	QString currentCollectionName, currentSceneName;
	if (!getCurrentCollectionAndSceneName(currentCollectionName, currentSceneName))
		return;


    // ensure in correct scene collection
    selectSceneCollection(scName);

    QList<SceneInfo> list;
    ActionHelp::updateScenesList(list);

	selectSceneCollection(currentCollectionName);

    QByteArray buf;
	ipcThreadPtr->fillDataBuf(buf, list);
	ipcThreadPtr->sendCmdToList(ShmId_StreamDeck, buf, SDIPCCMD_Req_OBS_ScenesList);

    sendNotifyFlag = true;
}

void ActionHelp::reqUpdateSourcesList(QString inCollectionName, QString inSceneName)
{
    sendNotifyFlag = false;

	QString currentCollectionName, sceneName;
	if (!getCurrentCollectionAndSceneName(currentCollectionName, sceneName))
		return;

	// ensure in correct scene collection
	selectSceneCollection(inCollectionName);

    QList<SourceInfo> list;
    QString errStr;
    updateSourcesList(inSceneName, list, errStr);

	selectSceneCollection(currentCollectionName);

    QByteArray buf;
    ipcThreadPtr->fillDataBuf(buf, errStr, list);
    ipcThreadPtr->sendCmdToList(ShmId_StreamDeck, buf, SDIPCCMD_Req_OBS_SourceList);

    sendNotifyFlag = true;
}

void ActionHelp::reqUpdateSourcesListOfAll(QString scName)
{
    sendNotifyFlag = false;

	QString currentCollectionName, sceneName;
	if (!getCurrentCollectionAndSceneName(currentCollectionName, sceneName))
		return;

    // ensure in correct scene collection
    selectSceneCollection(scName);

#if 1
    QList<SourceInfo> sourceStrList;
    QString errStr;

    updateSourcesList("", sourceStrList, errStr);
#else
    QList<SceneInfo> sceneInfoList;
    ActionHelp::updateScenesList(sceneInfoList);

    QList<SourceInfo> sourceStrList;
    QString errStr;

    for (int i=0; i<sceneInfoList.count(); i++) {
        QList<SourceInfo> list;

        QString sceneName(sceneInfoList.at(i).name.c_str());
        updateSourcesList(sceneName, list, errStr);

        sourceStrList.append(list);
    }
#endif

    QByteArray buf;
    ipcThreadPtr->fillDataBuf(buf, errStr, sourceStrList);
    ipcThreadPtr->sendCmdToList(ShmId_StreamDeck, buf, SDIPCCMD_Req_OBS_SourceListOfAll);

	selectSceneCollection(currentCollectionName);

    sendNotifyFlag = true;
}

void ActionHelp::reqSelectScene(QString scName, QString sceneName)
{
    sendNotifyFlag = false;

    QString errStr;
    selectScene(scName, sceneName, errStr);

    sendNotifyFlag = true;

    reqCurrentCollectionAndSceneName();
}

void ActionHelp::reqToggleSource(bool isMixerSrc,
                                 QString scName,
                                 QString sceneName,
                                 QString sourceName,
								 QString sourceIdStr,
								 int sceneItemId)
{
    sendNotifyFlag = false;

    if (scName==getCurrentSceneCollectionName())
        toggleSource(isMixerSrc, sceneName, sourceName, sourceIdStr, (int64_t) sceneItemId);
    else
        qDebug() << __FUNCTION__ << "ignore request, because the source is not in current collection.";

    sendNotifyFlag = true;

    // since mute / unmute doesn't callback
    reqSourcesState(isMixerSrc, scName, sceneName, sourceName, sourceIdStr, sceneItemId);
}

void ActionHelp::reqToggleRecord()
{
	sendNotifyFlag = false;

	if (obs_frontend_recording_active())
	{
		obs_frontend_recording_stop();
		ipcThreadPtr->onNotify(ShmId_StreamDeck, QStringList("recording_stopped"));
	}
	else
	{
		obs_frontend_recording_start();
		ipcThreadPtr->onNotify(ShmId_StreamDeck, QStringList("recording_started"));
	}

	sendNotifyFlag = true;
}

void ActionHelp::reqToggleStream()
{
	sendNotifyFlag = false;

	if (obs_frontend_streaming_active())
	{
		obs_frontend_streaming_stop();

		if (!obs_frontend_recording_active())
		{
			ipcThreadPtr->onNotify(ShmId_StreamDeck, QStringList("recording_stopped"));
		}

		ipcThreadPtr->onNotify(ShmId_StreamDeck, QStringList("streaming_stopped"));
	}
	else
	{
		obs_frontend_streaming_start();

		if (obs_frontend_recording_active())
		{
			ipcThreadPtr->onNotify(ShmId_StreamDeck, QStringList("recording_started"));
		}

		ipcThreadPtr->onNotify(ShmId_StreamDeck, QStringList("streaming_started"));
	}

	sendNotifyFlag = true;
}


void ActionHelp::reqCurrentCollectionAndSceneName()
{
    qDebug() << __FUNCTION__ << __LINE__;

    QString scName, sceneName;
    if (!getCurrentCollectionAndSceneName(scName, sceneName))
        return;

    QStringList list;
    list << scName << sceneName;

    QByteArray buf;
    ipcThreadPtr->fillDataBuf(buf, list);
    ipcThreadPtr->sendCmdToList(ShmId_StreamDeck, buf, SDIPCCMD_Req_OBS_CurrentCollectionAndSceneName);
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
    ipcThreadPtr->fillDataBuf(buf, list, flagStr);
    ipcThreadPtr->sendCmdToList(ShmId_StreamDeck, buf, SDIPCCMD_Req_OBS_SourceState);
}

void ActionHelp::selectSceneCollection(QString scName)
{   
    QString curr_scName = getCurrentSceneCollectionName();
    if (curr_scName.isEmpty()) {
        qDebug() << __FUNCTION__ << "Err: obs_frontend_get_current_scene_collection() got NULL!!";
        return;
    }

    if (curr_scName!=scName) {
        qDebug() << __FUNCTION__ << QThread::currentThread()
                 << QString("obs_frontend_set_current_scene_collection(%1)").arg(scName);

        obs_frontend_set_current_scene_collection(scName.toStdString().c_str());
    }
}

bool ActionHelp::selectScene(QString scName, QString sceneName, QString &errStr)
{
    selectSceneCollection(scName);

    QString curr_sceneName = getCurrentSceneName();
    if (curr_sceneName.isEmpty()) {
        errStr = "Err: obs_frontend_get_current_scene() got NULL!";
        qDebug() << errStr;
        return false;
    }

    if (curr_sceneName==sceneName)
        return true;

    // update info
    QList<SceneInfo> sceneList;
    updateScenesList(sceneList);

    for (int i=0; i<sceneList.count(); i++) {
        SceneInfo sceneInfo = sceneList.at(i);
        if (sceneInfo.name.c_str() == sceneName) {
            qDebug() << __FUNCTION__ << QThread::currentThread()
                     << QString("obs_frontend_set_current_scene(%1)").arg(sceneName);

            obs_frontend_set_current_scene(sceneInfo.scene);
            return true;
        }
    }

    // can't find match scene in list
    errStr = "can't find match scene name in list!";
    qDebug() << errStr;
    return false;
}

void ActionHelp::toggleSource(bool isMixerSrc, QString sceneName, QString srcName, QString sourceIdStr, int64_t sceneItemId)
{
    qDebug() << __FUNCTION__ << __LINE__ << sceneName << srcName << sourceIdStr << sceneItemId;

    if (isMixerSrc) {
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

            obs_source_set_muted(src, !setFlag);
            obs_source_release(src);  // use obs_source_release to release it when complete.
            return;
        }
    }


    QList<SceneInfo> sceneList;
    updateScenesList(sceneList);

    obs_source_t *sceneAsSource = NULL;
	for (int i = 0; i<sceneList.count(); i++) {
		if (sceneName == sceneList.at(i).name.c_str()) {
            sceneAsSource = sceneList.at(i).scene;
            break;
        }
    }

    if (!sceneAsSource) {
        qDebug() << __FUNCTION__ << __LINE__ << "can't find match scene!";
        return;
    }

    obs_scene_t* scene = obs_scene_from_source(sceneAsSource);
    if (!scene) {
        qDebug() << __FUNCTION__ << __LINE__ << "not a scene!";
        return;
    }

    obs_sceneitem_t* item = obs_scene_find_sceneitem_by_id(scene, sceneItemId);
    if (!item)
	{
		qDebug() << __FUNCTION__ << __LINE__ << "obs_scene_find_sceneitem_by_id() got NULL";

		item = obs_scene_find_source(scene, srcName.toStdString().c_str());

		if (!item)
		{
			qDebug() << __FUNCTION__ << __LINE__ << "obs_scene_find_source() got NULL";
			return;
		}
    }

    obs_source_t *source = obs_sceneitem_get_source(item);
    if (!source) {
        qDebug() << __FUNCTION__ << __LINE__ << "obs_sceneitem_get_source() got NULL";
        return;
    }

    const char *srcId = obs_source_get_id(source);
    if (sourceIdStr != srcId) {
        qDebug() << __FUNCTION__ << __LINE__ << "source identifier not match,"
                 << "expect: " << sourceIdStr
                 << "actual:"  << srcId;
        return;
    }


    if (isMixerSrc) {
        bool setFlag = obs_source_muted(source);
        qDebug() << __FUNCTION__ << __LINE__ << sceneName << srcName << sourceIdStr << "set mixer source: " << !setFlag;
        obs_source_set_muted(source, !setFlag);

    } else {
        bool setFlag = isSourceVisible(isMixerSrc, getCurrentSceneCollectionName(), sceneName, srcName, sourceIdStr, sceneItemId);
        qDebug() << __FUNCTION__ << __LINE__ << sceneName << srcName << sourceIdStr << sceneItemId << "set normal source: " << !setFlag;
        obs_sceneitem_set_visible(item, !setFlag);
    }
}

bool ActionHelp::isSourceVisible(bool isMixerSrc, QString scName, QString sceneName, QString sourceName, QString sourceIdStr, int64_t sceneItemId)
{
    if (scName!=getCurrentSceneCollectionName()) {
        qDebug() << __FUNCTION__ << __LINE__ << "scene collection not match, alway invisible!";
        return false;
    }


    if (isMixerSrc) {
        if (sourceIdStr=="coreaudio_output_capture" || // mac
            sourceIdStr=="coreaudio_input_capture"  || // mac
            sourceIdStr=="wasapi_output_capture"    || // win
            sourceIdStr=="wasapi_input_capture")       // win
        {
            // since Mic/Aux  not belong to any scene.
            obs_source_t *src = obs_get_source_by_name(sourceName.toStdString().c_str());
            bool ret = !obs_source_muted(src);
            obs_source_release(src);  // use obs_source_release to release it when complete.

            return ret;
        }
    }


    QList<SceneInfo> sceneList;
    updateScenesList(sceneList);

    obs_source_t *sceneAsSource = NULL;
    for (int i=0; i<sceneList.count(); i++)
	{
        if (sceneName==sceneList.at(i).name.c_str()) 
		{
            sceneAsSource = sceneList.at(i).scene;
            break;
        }
    }

    if (!sceneAsSource) {
        qDebug() << __FUNCTION__ << __LINE__ << "can't find match scene!";
        return false;
    }

    obs_scene_t* scene = obs_scene_from_source(sceneAsSource);
    if (!scene) {
        qDebug() << __FUNCTION__ << __LINE__ << "not a scene!";
        return false;
    }

	obs_sceneitem_t* item = obs_scene_find_sceneitem_by_id(scene, sceneItemId);
	if (!item) {
		qDebug() << __FUNCTION__ << __LINE__ << "obs_scene_find_sceneitem_by_id() got NULL";

		item = obs_scene_find_source(scene, sourceName.toStdString().c_str());

		if (!item)
		{
			qDebug() << __FUNCTION__ << __LINE__ << "obs_scene_find_source() got NULL";
			return false;
		}
	}

    obs_source_t *source = obs_sceneitem_get_source(item);
    if (!source) {
        qDebug() << __FUNCTION__ << __LINE__ << "obs_sceneitem_get_source() got NULL";
        return false;
    }

    const char *srcId = obs_source_get_id(source);
    if (sourceIdStr != srcId) {
        qDebug() << __FUNCTION__ << __LINE__ << "source identifier not match,"
                 << "expect: " << sourceIdStr
                 << "actual:"  << srcId;
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
    switch (srcType) {
    case OBS_SOURCE_TYPE_AUDIO_INPUT_CAPTURE:
    case OBS_SOURCE_TYPE_AUDIO_OUTPUT_CAPTURE:
    case OBS_SOURCE_TYPE_JACKIN_CLIENT:
    case OBS_SOURCE_TYPE_MEDIA_SOURCE:
    case OBS_SOURCE_TYPE_VLC_VIDEO_SOURCE:
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

    return OBS_SOURCE_TYPE_UNKNOWN;
}
