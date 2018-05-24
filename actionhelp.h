#ifndef ACTIONHELP_H
#define ACTIONHELP_H

#include <QObject>
#include <QHash>
#include <obs-frontend-api.h>
#include <obs-module.h>
#include <QTcpSocket>
#include "JSONUtils.h"

// ----------------------------------------------------------------------------
typedef enum _OBS_SOURCE_TYPE
{
    OBS_SOURCE_TYPE_UNKNOWN,
    OBS_SOURCE_TYPE_AUDIO_INPUT_CAPTURE,
    OBS_SOURCE_TYPE_AUDIO_OUTPUT_CAPTURE,
    OBS_SOURCE_TYPE_IMAGE,
    OBS_SOURCE_TYPE_VIDEO_CAPTURE_DEVICE,
    OBS_SOURCE_TYPE_GAME_CAPTURE,
    OBS_SOURCE_TYPE_MEDIA_SOURCE,
    OBS_SOURCE_TYPE_VLC_VIDEO_SOURCE,
    OBS_SOURCE_TYPE_TEXT,
    OBS_SOURCE_TYPE_WINDOW_CAPTURE,
    OBS_SOURCE_TYPE_BROWSER_SOURCE,
    OBS_SOURCE_TYPE_JACKIN_CLIENT,
	OBS_SOURCE_TYPE_NDI_SOURCE
}OBS_SOURCE_TYPE;

typedef struct _SceneInfo
{
    obs_source_t* scene;
    std::string   name;
	bool   isSelected;
}SceneInfo;

typedef struct _SourceInfo
{
    std::string     sceneName;

    obs_source_t*   source;
    std::string     name;
    std::string     idStr;
    std::string     displayName;
	int64_t     sceneItemId;
    obs_source_type type;
}SourceInfo;

enum ToggleInfo
{
	Toggle,
	Activate,
	Deactivate
};

static const int RPC_ID_startStreaming = 1;
static const int RPC_ID_stopStreaming = 2;
static const int RPC_ID_startRecording = 3;
static const int RPC_ID_stopRecording = 4;
//static const int RPC_ID_getCollections = 5;
static const int RPC_ID_makeCollectionActive = 6;
static const int RPC_ID_fetchSceneCollectionsSchema = 8;
static const int RPC_ID_getScenes = 9;
static const int RPC_ID_getSources = 10;
static const int RPC_ID_makeSceneActive = 11;
static const int RPC_ID_getActiveSceneId = 12;
static const int RPC_ID_muteMixerAudioSource = 13;
static const int RPC_ID_unmuteMixerAudioSource = 14;
static const int RPC_ID_hideScene = 15;
static const int RPC_ID_showScene = 16;
static const int RPC_ID_subscribeToSceneSwitched = 17;
static const int RPC_ID_subscribeToSceneAdded = 18;
static const int RPC_ID_subscribeToSceneRemoved = 19;
static const int RPC_ID_subscribeToSouceAdded = 20;
static const int RPC_ID_subscribeToSourceRemoved = 21;
static const int RPC_ID_subscribeToSourceUpdated = 22;
static const int RPC_ID_subscribeToItemAdded = 23;
static const int RPC_ID_subscribeToItemRemoved = 24;
static const int RPC_ID_subscribeToItemUpdated = 25;
static const int RPC_ID_subscribeToStreamingStatusChanged = 26;
static const int RPC_ID_getActiveCollection = 27;
static const int RPC_ID_subscribeToCollectionAdded = 28;
static const int RPC_ID_subscribeToCollectionRemoved = 29;
static const int RPC_ID_subscribeToCollectionSwitched = 30;
static const int RPC_ID_getRecordingAndStreamingState = 31;
static const int RPC_ID_subscribeToCollectionUpdated = 32;

// ----------------------------------------------------------------------------
class ActionHelp : public QObject
{
    Q_OBJECT
public:
    explicit ActionHelp(QObject *parent = 0);
    bool getSendNotifyFlag();
    static QString getCurrentSceneCollectionName();
    static QString getCurrentSceneName();
    static bool getCurrentCollectionAndSceneName(QString &scName, QString&sceneName);

    void updateSceneCollectionList(QStringList &list);
	void updateScenesList(QList<SceneInfo> &list);
	void updateSourcesList(QString sceneName, QList<SourceInfo> &list, QString &errStr);

    void selectSceneCollection(QString scName);
    bool selectScene(QString scName, QString sceneName, QString &errStr);
    bool toggleSource(bool isMixerSrc, QString sceneName, QString srcName, QString sourceIdStr, int64_t sceneItemId, ToggleInfo toggleInfo);

    bool isSourceVisible(bool isMixerSrc, QString scName, QString sceneName, QString sourceName, QString sourceIdStr, int64_t sceneItemId);

	void WriteToSocket(const std::string &inString);

signals:

public slots:
    void reqUpdateSCList();
    void reqUpdateSceneList(QString scName);
    void reqUpdateSourcesList(QString inCollectionName, QString inSceneName);
    void reqUpdateSourcesListOfAll(QString scName);
    void reqSelectScene(QString scName, QString sceneName);
    void reqToggleSource(bool isMixerSrc, QString scName, QString sceneName, QString sourceName, QString sourceIdStr, int sceneItemId, int toggleInfo);

	void reqVersion();

    void reqCurrentCollectionAndSceneName();
    void reqSourcesState(bool isMixerSrc, QString scName, QString sceneName, QString sourceName, QString sourceIdStr, int sceneItemId);

	void SDClientConnected();
	void ReadyRead();
	void Disconnected();

private:

    static int isMixerSource(OBS_SOURCE_TYPE srcType);
    static OBS_SOURCE_TYPE getSourceType(const std::string& idStr);

    bool sendNotifyFlag;

	//void reqToggleRecord(json* inResponse);
	void reqStartRecord(json* inResponse);
	void reqStopRecord(json* inResponse);

	//void reqToggleStream(json* inResponse);
	void reqStartStream(json* inResponse);
	void reqStopStream(json* inResponse);


	QTcpSocket *mSocket;
};

#endif // ACTIONHELP_H
