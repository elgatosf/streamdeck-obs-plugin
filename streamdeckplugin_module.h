#ifndef STREAMDECKPLUGIN_MODULE_H
#define STREAMDECKPLUGIN_MODULE_H

#include <obs-module.h>
#include <obs-frontend-api.h>

extern "C" {
    static void OBSEvent(enum obs_frontend_event event, void* switcher);
    static void SaveCallback(obs_data_t* save_data, bool saving, void*);
    void FreeStreamDeckPlugin();
    void InitStreamDeckPlugin();
}

#endif // STREAMDECKPLUGIN_MODULE_H
