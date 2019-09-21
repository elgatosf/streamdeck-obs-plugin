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
    obs-dev/headers/UI/obs-frontend-api.h \
    obs-dev/headers/libobs/callback/calldata.h \
    obs-dev/headers/libobs/callback/decl.h \
    obs-dev/headers/libobs/callback/proc.h \
    obs-dev/headers/libobs/callback/signal.h \
    obs-dev/headers/libobs/graphics/axisang.h \
    obs-dev/headers/libobs/graphics/graphics.h \
    obs-dev/headers/libobs/graphics/input.h \
    obs-dev/headers/libobs/graphics/math-defs.h \
    obs-dev/headers/libobs/graphics/matrix3.h \
    obs-dev/headers/libobs/graphics/matrix4.h \
    obs-dev/headers/libobs/graphics/vec2.h \
    obs-dev/headers/libobs/graphics/vec3.h \
    obs-dev/headers/libobs/graphics/vec4.h \
    obs-dev/headers/libobs/media-io/audio-io.h \
    obs-dev/headers/libobs/media-io/frame-rate.h \
    obs-dev/headers/libobs/media-io/media-io-defs.h \
    obs-dev/headers/libobs/media-io/video-io.h \
    obs-dev/headers/libobs/obs-audio-controls.h \
    obs-dev/headers/libobs/obs-config.h \
    obs-dev/headers/libobs/obs-data.h \
    obs-dev/headers/libobs/obs-defs.h \
    obs-dev/headers/libobs/obs-encoder.h \
    obs-dev/headers/libobs/obs-hotkey.h \
    obs-dev/headers/libobs/obs-hotkeys.h \
    obs-dev/headers/libobs/obs-interaction.h \
    obs-dev/headers/libobs/obs-module.h \
    obs-dev/headers/libobs/obs-output.h \
    obs-dev/headers/libobs/obs-properties.h \
    obs-dev/headers/libobs/obs-scene.h \
    obs-dev/headers/libobs/obs-service.h \
    obs-dev/headers/libobs/obs-source.h \
    obs-dev/headers/libobs/obs-ui.h \
    obs-dev/headers/libobs/obs.h \
    obs-dev/headers/libobs/util/base.h \
    obs-dev/headers/libobs/util/bmem.h \
    obs-dev/headers/libobs/util/c99defs.h \
    obs-dev/headers/libobs/util/darray.h \
    obs-dev/headers/libobs/util/profiler.h \
    obs-dev/headers/libobs/util/text-lookup.h \
    obs-dev/headers/libobs/util/util_uint128.h \
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

VERSION = 4.3.1

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
