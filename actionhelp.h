#ifndef ACTIONHELP_H
#define ACTIONHELP_H

#include <QObject>
#include <obs-frontend-api.h>
#include <obs-module.h>

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
    OBS_SOURCE_TYPE_JACKIN_CLIENT
}OBS_SOURCE_TYPE;

typedef struct _SceneInfo
{
    obs_source_t* scene;
    std::string   name;
}SceneInfo;

typedef struct _SourceInfo
{
    std::string     sceneName;

    obs_source_t*   source;
    std::string     name;
    std::string     idStr;
    std::string     displayName;
    obs_source_type type;
}SourceInfo;


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
    void toggleSource(bool isMixerSrc, QString sceneName, QString srcName, QString sourceIdStr);

    bool isSourceVisible(bool isMixerSrc, QString scName, QString sceneName, QString sourceName, QString sourceIdStr);

signals:

public slots:
    void reqUpdateSCList();
    void reqUpdateSceneList(QString scName);
    void reqUpdateSourcesList(QString inCollectionName, QString inSceneName);
    void reqUpdateSourcesListOfAll(QString scName);
    void reqSelectSecene(QString scName, QString sceneName);
    void reqToggleSource(bool isMixerSrc, QString scName, QString sceneName, QString sourceName, QString sourceIdStr);
	void reqToggleRecord();
	void reqToggleStream();

    void reqCurrentCollectionAndSceneName();
    void reqSourcesState(bool isMixerSrc, QString scName, QString sceneName, QString sourceName, QString sourceIdStr);

private:

    static int isMixerSource(OBS_SOURCE_TYPE srcType);
    static OBS_SOURCE_TYPE getSourceType(const std::string& idStr);

    bool sendNotifyFlag;
};

#endif // ACTIONHELP_H
