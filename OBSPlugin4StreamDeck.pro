#-------------------------------------------------
#
# Project created by QtCreator 2016-11-28T14:58:54
#
#-------------------------------------------------

QT       += widgets network

TARGET   = StreamDeckPlugin
TEMPLATE = lib

DEFINES += OBSPLUGINSTREAMDECK_LIBRARY

SOURCES += \
    streamdeckplugin_module.cpp \
    infodialog.cpp \
    actionhelp.cpp

HEADERS +=\
    obspluginstreamdeck_global.h \
    streamdeckplugin_module.h \
    infodialog.h \
    actionhelp.h \
	JSONUtils.h \
	SourceInfo.h \
	Vendor/json/src/json.hpp

CONFIG += c++11

# dead code stripping
LIBS += -dead_strip

VERSION = 5.1.0

QMAKE_TARGET_DESCRIPTION = "Elgato Remote Control for OBS Studio"
QMAKE_TARGET_COMPANY = "Corsair Memory, Inc"
QMAKE_TARGET_COPYRIGHT = "Copyright \\251 2017-2018 Corsair Memory, Inc."

DEFINES += VERSION_STR=\\\"$$VERSION\\\"


# json
INCLUDEPATH += $$PWD/Vendor/json/src/ 


INCLUDEPATH += $$PWD/obs-dev/headers/libobs/ \
				$$PWD/obs-dev/headers/UI/

win32 {
	
    CONFIG += dynamiclib
    
	LIBS += -L$$PWD/obs-dev/bin/win \
			-lobs \
			-lobs-frontend-api


} else: macx {
	
    CONFIG += plugin
    QMAKE_LFLAGS_PLUGIN -= -dynamiclib
    QMAKE_LFLAGS_PLUGIN += -bundle
    QMAKE_EXTENSION_SHLIB = so
    
    LIBS += -L$$PWD/obs-dev/bin/mac \
            -lobs \
            -lobs-frontend-api
}

FORMS += infodialog.ui
