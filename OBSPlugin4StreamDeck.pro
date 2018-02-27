#-------------------------------------------------
#
# Project created by QtCreator 2016-11-28T14:58:54
#
#-------------------------------------------------

QT       += widgets

TARGET   = StreamDeckPlugin
TEMPLATE = lib

DEFINES += OBSPLUGINSTREAMDECK_LIBRARY

SOURCES += \
    streamdeckplugin_module.cpp \
    infodialog.cpp \
    actionhelp.cpp \
    ipc_thread.cpp

HEADERS +=\
    obspluginstreamdeck_global.h \
    streamdeckplugin_module.h \
    infodialog.h \
    actionhelp.h \
    ipc_thread.h

CONFIG += c++11

VERSION = 0.1.2

QMAKE_TARGET_DESCRIPTION = "Stream Deck OBS Plugin"
QMAKE_TARGET_COMPANY = "Elgato Systems GmbH"
QMAKE_TARGET_COPYRIGHT = "Copyright \\251 2017, Elgato Systems GmbH"

DEFINES += VERSION_STR=\\\"$$VERSION\\\"

include(./SharedFile/SharedFile.pri)   # IPC
INCLUDEPATH += ./SharedFile/

win32 {
	
    CONFIG += dynamiclib
    INCLUDEPATH += $$PWD/obs-dev/src/libobs \
                += $$PWD/obs-dev/src/UI/obs-frontend-api \
                += $$PWD/obs-dev/stc/deps



        message("x86_64 build")
        LIBS += -L$$PWD/obs-dev/bin/win/libobs/Release \
                -L$$PWD/obs-dev/bin/win/UI/obs-frontend-api/Release \
                -lobs \
                -lobs-frontend-api
        ## Windows x64 (64bit) specific build here


} else: macx {
	
    CONFIG += plugin
    QMAKE_LFLAGS_PLUGIN -= -dynamiclib
    QMAKE_LFLAGS_PLUGIN += -bundle
    QMAKE_EXTENSION_SHLIB = so
    
    INCLUDEPATH += $$PWD/obs-dev/src/libobs/ \
    				$$PWD/obs-dev/src/UI/obs-frontend-api/
    
    LIBS += -L$$PWD/obs-dev/bin/mac \
            -lobs \
            -lobs-frontend-api
}

FORMS += infodialog.ui
