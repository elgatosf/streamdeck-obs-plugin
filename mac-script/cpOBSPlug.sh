#!/bin/bash

install_name_tool -change @rpath/QtWidgets.framework/Versions/5/QtWidgets @rpath/QtWidgets $1
install_name_tool -change @rpath/QtGui.framework/Versions/5/QtGui @rpath/QtGui $1
install_name_tool -change @rpath/QtCore.framework/Versions/5/QtCore @rpath/QtCore $1

OBS_PLUGINS_DIR="/Library/Application Support/obs-studio/plugins/"
PLUGIN_NAME="StreamDeckPlugin" 

cp $1 $PLUGIN_NAME.so
  
if [ -d "$OBS_PLUGINS_DIR" ]; then
        echo "install Stream Deck OBS plugin to $OBS_PLUGINS_DIR"
        sudo mkdir -p "$OBS_PLUGINS_DIR/$PLUGIN_NAME/bin/"
        sudo mkdir -p "$OBS_PLUGINS_DIR/$PLUGIN_NAME/data/"
        sudo cp ./$PLUGIN_NAME.so "$OBS_PLUGINS_DIR/$PLUGIN_NAME/bin/"
fi

#/Applications/OBS.app/Contents/MacOS/OBS
