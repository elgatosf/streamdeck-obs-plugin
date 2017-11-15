#include "streamdeckplugin_module.h"
#include "infodialog.h"
#include "actionhelp.h"
#include "ipc_thread.h"
#include <QMainWindow>
#include <QAction>
#include <QDebug>

OBS_DECLARE_MODULE()
OBS_MODULE_USE_DEFAULT_LOCALE("frontend-tools", "en-US")

IPC_Thread *ipcThreadPtr  = NULL;
ActionHelp *actionHelpPtr = NULL;

// ----------------------------------------------------------------------------
// OBS Module Callback
// ----------------------------------------------------------------------------
void ItemMuted(void* ptr, calldata_t* calldata)
{
    Q_UNUSED(ptr)

    obs_source_t* source = (obs_source_t*)calldata_ptr(calldata, "source");
    std::string name = obs_source_get_name(source);
    obs_source_type  type = obs_source_get_type(source);
    std::string id = obs_source_get_id(source);
    std::string displayName = obs_source_get_display_name(id.c_str());

    bool muted = calldata_bool(calldata, "muted");

//    qDebug() << __FUNCTION__ << muted << QString::fromStdString(name) << type << QString::fromStdString(id) << QString::fromStdString(displayName);

    // send to SD
    if (actionHelpPtr && actionHelpPtr->getSendNotifyFlag()) {
        QString scName, sceneName;
        if (!actionHelpPtr->getCurrentCollectionAndSceneName(scName, sceneName))
            return;

        // prepare source info
        QStringList list;
        QString isMixerSrcStr = QString("%1").arg(true);
        QString activeFlagStr = QString("%1").arg(!muted);
        list << "syncSourceState" << isMixerSrcStr << scName << sceneName << name.c_str() << id.c_str() << activeFlagStr;

        // add to cmd list
        QMetaObject::invokeMethod(ipcThreadPtr, "onNotify", Q_ARG(ShmID, ShmId_StreamDeck),
                                                            Q_ARG(QStringList, list));
    }

}

void UpdateSource()
{
    qDebug() << __FUNCTION__;

    QString errStr;
    QList<SourceInfo> list;

    actionHelpPtr->updateSourcesList("", list, errStr);

    for (int i=0; i<list.count(); i++) {
        SourceInfo srcInfo = list.at(i);
        signal_handler_t* signalHandler = obs_source_get_signal_handler(srcInfo.source);
        signal_handler_connect(signalHandler, "mute", ItemMuted, nullptr);
    }
}

void ItemVisible(void* ptr, calldata_t* calldata)
{
    Q_UNUSED(ptr)

    obs_sceneitem_t* sceneItem = (obs_sceneitem_t*)calldata_ptr(calldata, "item");
    obs_source_t* source = obs_sceneitem_get_source(sceneItem);
    std::string name = obs_source_get_name(source);
//    obs_source_type  type = obs_source_get_type(source);
    std::string id = obs_source_get_id(source);
//    std::string displayName = obs_source_get_display_name(id.c_str());

    bool visible = calldata_bool(calldata, "visible");

//    qDebug() << __FUNCTION__ << name.c_str() << type << id.c_str() << displayName.c_str() << visible;

    // send to SD
    if (actionHelpPtr && actionHelpPtr->getSendNotifyFlag()) {
        QString scName, sceneName;
        if (!actionHelpPtr->getCurrentCollectionAndSceneName(scName, sceneName))
            return;

        // prepare source info
        QStringList list;
        QString isMixerSrcStr = QString("%1").arg(false);
        QString flagStr = QString("%1").arg(visible);
        list << "syncSourceState" << isMixerSrcStr << scName << sceneName << name.c_str() << id.c_str() << flagStr;

        // add to cmd list
        QMetaObject::invokeMethod(ipcThreadPtr, "onNotify", Q_ARG(ShmID, ShmId_StreamDeck),
                                                            Q_ARG(QStringList, list));
    }
}

void UpdateScenes()
{
    qDebug() << __FUNCTION__;

    // Enumerate scenes for current scene collection
    struct obs_frontend_source_list scenes = { };
    obs_frontend_get_scenes(&scenes);

    // Cycle through scenes
    for (size_t i = 0; i < scenes.sources.num; i++)
    {
        // Connect signal handler
        signal_handler_t* signalHandler = obs_source_get_signal_handler(scenes.sources.array[i]);
        signal_handler_connect(signalHandler, "item_visible", ItemVisible, nullptr);
    }

    // Cleanup
    obs_frontend_source_list_free(&scenes);
}

void OBSEvent(enum obs_frontend_event event, void* data)
{
    Q_UNUSED(data)

    qDebug() << __FUNCTION__ << QThread::currentThread();

    switch (event) {
    case OBS_FRONTEND_EVENT_STREAMING_STARTING:
        qDebug() << "OBS_FRONTEND_EVENT_STREAMING_STARTING";        break;
    case OBS_FRONTEND_EVENT_STREAMING_STARTED:
        qDebug() << "OBS_FRONTEND_EVENT_STREAMING_STARTED";

        if (actionHelpPtr->getSendNotifyFlag()) {
            QMetaObject::invokeMethod(ipcThreadPtr, "onNotify", Q_ARG(ShmID, ShmId_StreamDeck),
                                                                Q_ARG(QStringList, QStringList("streaming_started")));
        }
        break;
    case OBS_FRONTEND_EVENT_STREAMING_STOPPING:
        qDebug() << "OBS_FRONTEND_EVENT_STREAMING_STOPPING";
        break;
    case OBS_FRONTEND_EVENT_STREAMING_STOPPED:
        qDebug() << "OBS_FRONTEND_EVENT_STREAMING_STOPPED";

        if (actionHelpPtr->getSendNotifyFlag()) {
            QMetaObject::invokeMethod(ipcThreadPtr, "onNotify", Q_ARG(ShmID, ShmId_StreamDeck),
                                                                Q_ARG(QStringList, QStringList("streaming_stopped")));
        }
        break;
    case OBS_FRONTEND_EVENT_RECORDING_STARTING:
        qDebug() << "OBS_FRONTEND_EVENT_RECORDING_STARTING";
        break;
    case OBS_FRONTEND_EVENT_RECORDING_STARTED:
        qDebug() << "OBS_FRONTEND_EVENT_RECORDING_STARTED";

        if (actionHelpPtr->getSendNotifyFlag()) {
            QMetaObject::invokeMethod(ipcThreadPtr, "onNotify", Q_ARG(ShmID, ShmId_StreamDeck),
                                                                Q_ARG(QStringList, QStringList("recording_started")));
        }
        break;
    case OBS_FRONTEND_EVENT_RECORDING_STOPPING:
        qDebug() << "OBS_FRONTEND_EVENT_RECORDING_STOPPING";
        break;
    case OBS_FRONTEND_EVENT_RECORDING_STOPPED:
        qDebug() << "OBS_FRONTEND_EVENT_RECORDING_STOPPED";
        if (actionHelpPtr->getSendNotifyFlag()) {
            QMetaObject::invokeMethod(ipcThreadPtr, "onNotify", Q_ARG(ShmID, ShmId_StreamDeck),
                                                                Q_ARG(QStringList, QStringList("recording_stopped")));
        }
        break;
    case OBS_FRONTEND_EVENT_SCENE_CHANGED:
        qDebug() << "OBS_FRONTEND_EVENT_SCENE_CHANGED";       
        QMetaObject::invokeMethod(actionHelpPtr, "reqCurrentCollectionAndSceneName");
        break;
    case OBS_FRONTEND_EVENT_SCENE_LIST_CHANGED:
        qDebug() << "OBS_FRONTEND_EVENT_SCENE_LIST_CHANGED";
        if (actionHelpPtr->getSendNotifyFlag()) {
            QMetaObject::invokeMethod(ipcThreadPtr, "onNotify", Q_ARG(ShmID, ShmId_StreamDeck),
                                                                Q_ARG(QStringList, QStringList("update")));
        }
        break;
    case OBS_FRONTEND_EVENT_TRANSITION_CHANGED:
        qDebug() << "OBS_FRONTEND_EVENT_TRANSITION_CHANGED";
        break;
    case OBS_FRONTEND_EVENT_TRANSITION_STOPPED:
        qDebug() << "OBS_FRONTEND_EVENT_TRANSITION_STOPPED";
        break;
    case OBS_FRONTEND_EVENT_TRANSITION_LIST_CHANGED:
        qDebug() << "OBS_FRONTEND_EVENT_TRANSITION_LIST_CHANGED";
        break;
    case OBS_FRONTEND_EVENT_SCENE_COLLECTION_CHANGED:
        qDebug() << "OBS_FRONTEND_EVENT_SCENE_COLLECTION_CHANGED";
        UpdateSource();
        UpdateScenes();
        QMetaObject::invokeMethod(actionHelpPtr, "reqCurrentCollectionAndSceneName");
        break;
    case OBS_FRONTEND_EVENT_SCENE_COLLECTION_LIST_CHANGED:
        qDebug() << "OBS_FRONTEND_EVENT_SCENE_COLLECTION_LIST_CHANGED";

        if (actionHelpPtr->getSendNotifyFlag()) {
            QMetaObject::invokeMethod(ipcThreadPtr, "onNotify", Q_ARG(ShmID, ShmId_StreamDeck),
                                                                Q_ARG(QStringList, QStringList("update")));
        }
        break;
    case OBS_FRONTEND_EVENT_PROFILE_CHANGED:
        qDebug() << "OBS_FRONTEND_EVENT_PROFILE_CHANGED";
        break;
    case OBS_FRONTEND_EVENT_PROFILE_LIST_CHANGED:
        qDebug() << "OBS_FRONTEND_EVENT_PROFILE_LIST_CHANGED";
        break;
    case OBS_FRONTEND_EVENT_EXIT:
        qDebug() << "OBS_FRONTEND_EVENT_EXIT";
        break;
    }

    if (event == OBS_FRONTEND_EVENT_EXIT)
        FreeStreamDeckPlugin();

    // needed to reset the transition, but not working properly now (only some transitions work)
    // if (event == OBS_FRONTEND_EVENT_TRANSITION_STOPPED){
    //	SwitcherData *test = (SwitcherData*)switcher;
    //	test->transitionWaitMutex2.lock();
    //	this_thread::sleep_for(chrono::milliseconds(100)); //seems necesssary
    // since the transition is not always done
    //	test->transitionCv.notify_one();
    //	test->transitionWaitMutex2.unlock();
    //
    //}
}

void SaveCallback(obs_data_t* save_data, bool saving, void*)
{
    Q_UNUSED(save_data)

    qDebug() << __FUNCTION__ << QThread::currentThread() << "saving: " << saving;

    static bool first = true;
    if (first) {
        // connect source changing state signal.
        first = false;

        UpdateSource();
        UpdateScenes();

        QTimer::singleShot(1500, actionHelpPtr, SLOT(reqCurrentCollectionAndSceneName()));

    } else if (saving) {
        UpdateSource();
        UpdateScenes();

        if (actionHelpPtr->getSendNotifyFlag()) {
            QMetaObject::invokeMethod(ipcThreadPtr, "onNotify", Q_ARG(ShmID, ShmId_StreamDeck),
                                                                Q_ARG(QStringList, QStringList("update")));
        }
    }
}

void FreeStreamDeckPlugin()
{
    if (actionHelpPtr) {
        delete actionHelpPtr;
        actionHelpPtr = NULL;

    }

    if (ipcThreadPtr) {
        delete ipcThreadPtr;
        ipcThreadPtr = NULL;
    }
}

void InitStreamDeckPlugin()
{
#if 1
    // setup tools menu action for show pluging info
    QAction* action
        = (QAction*)obs_frontend_add_tools_menu_qaction(obs_module_text("Elgato Stream Deck Plugin"));

    auto cb = []()
    {
        obs_frontend_push_ui_translation(obs_module_get_string);
        QMainWindow* window = (QMainWindow*)obs_frontend_get_main_window();
        InfoDialog dialog(window);
        dialog.exec();

        obs_frontend_pop_ui_translation();
    };
    action->connect(action, &QAction::triggered, cb);
#endif

    QMainWindow *parent = (QMainWindow*)obs_frontend_get_main_window();
    // action helper, some action must in main thread.
    actionHelpPtr = new ActionHelp(parent);

    // communication thread
    ipcThreadPtr = new IPC_Thread(parent);
    ipcThreadPtr->start();

    // setup obs event callback
    obs_frontend_add_save_callback(SaveCallback, nullptr);
    obs_frontend_add_event_callback(OBSEvent, nullptr);

    if (actionHelpPtr->getSendNotifyFlag())
    {
        QMetaObject::invokeMethod(ipcThreadPtr, "onNotify", Q_ARG(ShmID, ShmId_StreamDeck),
                                                            Q_ARG(QStringList, QStringList("obs_started")));
    }
}

// ----------------------------------------------------------------------------
bool obs_module_load(void)
{
    InitStreamDeckPlugin();
    return true;
}

void obs_module_unload(void)
{
    FreeStreamDeckPlugin();
}
