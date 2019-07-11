#ifndef ACTIONHELP_H
#define ACTIONHELP_H

#include <QObject>
#include <QHash>
#include <obs-frontend-api.h>
#include <obs-module.h>
#include <QTcpSocket>
#include "JSONUtils.h"
#include "SourceInfo.h"

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

typedef struct _GroupItemInfo
{
	std::string   sourceName;
	bool   isVisible;
	int64_t     sceneItemId;
	obs_sceneitem_t * item;
}GroupItemInfo;

typedef struct _SceneItemInfo
{
	obs_source_t* source;
	std::string   sourceName;
	bool   isVisible;
	bool   isGroup;
	int64_t     sceneItemId;
	QList<_GroupItemInfo>  groupSceneItems;
}SceneItemInfo;

typedef struct _SceneInfo
{
	obs_source_t* scene;
	std::string   name;
	QList<SceneItemInfo>  sceneItems;
}SceneInfo;

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
static const int RPC_ID_subscribeToRecordingStatusChanged = 33;

// ----------------------------------------------------------------------------
class ActionHelp : public QObject
{
    Q_OBJECT
public:
    explicit ActionHelp(QObject *parent = 0);
    ~ActionHelp();

	//used to prevent sending event messages to Stream Deck, when updating streaming and recording states on request of Stream Deck
    bool GetIsRespondingStreamingFlag();

	//used to prevent sending event messages to Stream Deck, when updating collections, scenes or sources on request of Stream Deck
	bool GetIsRespondingCollectionsSchemaFlag();
	
	void WriteToSocket(const std::string &inString);

	void UpdateSourcesList(QList<SourceInfo> &outSourceList);
	void UpdateScenesList(QList<SceneInfo> &outList);

signals:

public slots :
	void WriteToSocketInMainThread(QString inString);
	//void reqVersion();

    void NotifySceneSwitched();
    void NotifyCollectionChanged();

	//Socket connection
	void SDClientConnected();
	void ReadyRead();
	void Disconnected();

private:
	//scenes and collections
	QString GetCurrentSceneName();
	bool GetCurrentCollectionAndSceneName(QString &inCollectionName, QString&inSceneName);
	QString GetCurrentSceneCollectionName();

	void UpdateSceneCollectionList(QStringList &list);
	bool RequestSceneListUpdate(QString inCollectionName, QList<SceneInfo>& outSceneList);

	void UpdateScenesAsSourcesList(QList<SourceInfo> &outSet);

	bool SelectSceneCollection(QString inCollectionName);
	bool SelectScene(QString inSceneName);

	//sources
	bool RequestSourcesListUpdate(QString inCollectionName, QList<SourceInfo>& outSceneList);

	bool ToggleSourceVisibility(QString inSceneId, QString inSceneItemId, QString inSourceId, QString inGroupParentId, ToggleInfo inToggleInfo);
	bool MuteMixerSource(QString inSourceId, ToggleInfo inToggleInfo);

	bool IsSourceVisible(obs_sceneitem_t* inItem);


	//streaming and recording
	//void reqToggleRecord(json* inResponse);
	bool RequestStartRecording();
	bool RequestStopRecording();

	//void reqToggleStream(json* inResponse);
	bool RequestStartStreaming();
	bool RequestStopStreaming();

	QTcpSocket *mSocket = nullptr;

	//used to prevent sending event messages to Stream Deck, when updating streaming and recording states on request of Stream Deck
	bool mIsRespondingStreamingFlag = true;
	
	//used to prevent sending event messages to Stream Deck, when updating collections, scenes or sources on request of Stream Deck
	//so that we can be sure that SD doesn't get unnecessary messages
	bool mIsRespondingCollectionsSchemaFlag = true;
};

#endif // ACTIONHELP_H
