#ifndef STREAMDECKIPC
#define STREAMDECKIPC

#include <QString>
#include <sharedfile.h>

#define SHF_KEY     ("STREAMDECKSHM")
#define SHF_SIZE    (100 * 1000)

// ----------------------------------------------------------------------------
typedef enum _ShmID {
    ShmId_OBS,
    ShmId_StreamDeck,
    ShmId_Invalid,
}ShmID;

typedef struct _ShmPayload {
    ShmID    receviedId;

    quint64  totalSize;      // data size only, without the ShmPayload struct size.

    ShmID    senderId;
    quintptr senderThreadPtr;

    quint64  timeStamp;     // QDateTime::currentDateTime().toMSecsSinceEpoch();
    quint64  expiredMs;
    quint64  cmd;
}ShfPayload;

struct IPC_CMD {
    ShfPayload payload;
    QByteArray dataBuf;
};

// ----------------------------------------------------------------------------
// Command & Struct
// ----------------------------------------------------------------------------
typedef enum _StreamDeckIPCCmd {
    SDIPCCMD_Invalid = 0,

    // OBS
    SDIPCCMD_Req_OBS_SCList,                // Scenes Collection List,
    SDIPCCMD_Req_OBS_ScenesList,
    SDIPCCMD_Req_OBS_SourceList,
    SDIPCCMD_Req_OBS_SourceListOfAll,
    SDIPCCMD_Req_OBS_CurrentCollectionAndSceneName,
    SDIPCCMD_Req_OBS_SourceState,

    SDIPCCMD_Select_OBS_SceneCollection,
    SDIPCCMD_Select_OBS_Scene,
    SDIPCCMD_Toggle_OBS_Source,

    // Common
    SDIPCCMD_Req_VerInfo,
    SDIPCCMD_ShowWindow,
    SDIPCCMD_Notify,
	SDIPCCMD_ImportProfile,

    SDIPCCMD_COUNT
}SDIPCCmd;

#endif // STREAMDECKIPC

