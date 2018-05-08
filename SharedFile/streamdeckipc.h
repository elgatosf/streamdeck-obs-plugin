#ifndef STREAMDECKIPC
#define STREAMDECKIPC

#include <QString>

#define SHF_KEY				("STREAMDECKSHM")
#define SHF_INTERNAL_KEY    ("STREAMDECKINTERNALSHM")

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
	
	// OBS (additional)
	SDIPCCMD_Toggle_OBS_Stream,
	SDIPCCMD_Toggle_OBS_Record,
	
	// Force quit
	SDIPCCMD_QuitSession,

	// OBS error handling
	SDIPCCMD_Select_OBS_Scene_Error,
	SDIPCCMD_Toggle_OBS_Source_Error,

	//OBS for multi actions
	SDIPCCMD_Start_OBS_Stream,
	SDIPCCMD_Stop_OBS_Stream,
	SDIPCCMD_Start_OBS_Record,
	SDIPCCMD_Stop_OBS_Record,
	SDIPCCMD_Activate_OBS_Source,
	SDIPCCMD_Deactivate_OBS_Source,

	SDIPCCMD_COUNT,
}SDIPCCmd;

#endif // STREAMDECKIPC

