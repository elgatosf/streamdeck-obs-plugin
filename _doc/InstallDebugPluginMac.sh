#!/bin/bash
#
#	InstallDebugPluginMac.sh
#
#	This script installs the compiled debug plugin to OBS.
#	It needs to run as root.
#	
#	Usage:
#	sudo ./InstallDebugPluginMac.sh
#
#


#---------------------------------------------------------------------
# Force expand a wildcard pattern into the list of matching pathnames
#---------------------------------------------------------------------
shopt -s nullglob


#---------------------------------------------------------------------
# Fail after the first error
#---------------------------------------------------------------------
set -e


#---------------------------------------------------------------------
# Get the required paths
#---------------------------------------------------------------------
MYPATH=`dirname "$0"`
cd "$MYPATH/../"
MYPATH=`pwd -P`


DESTINATION_PLUGIN_PATH="/Library/Application Support/obs-studio/plugins/StreamDeckPlugin/bin/StreamDeckPlugin.so"
COMPILED_PLUGIN_PATH="Debug/libStreamDeckPlugin.dylib"


#---------------------------------------------------------------------
# Copy the plugin to OBS
#---------------------------------------------------------------------

if [ -f "${DESTINATION_PLUGIN_PATH}" ]
then
	echo "Removing old StreamDeckPlugin.so plugin..."
	rm "${DESTINATION_PLUGIN_PATH}"
fi

if [ ! -f "${COMPILED_PLUGIN_PATH}" ]
then
	echo "*** Could not locate the new compiled plugin"
	exit 1
fi

echo "Copy the newly compiled plugin to the OBS folder..."
cp "Debug/libStreamDeckPlugin.dylib" "/Library/Application Support/obs-studio/plugins/StreamDeckPlugin/bin"

echo "Rename the plugin..."
mv "/Library/Application Support/obs-studio/plugins/StreamDeckPlugin/bin/libStreamDeckPlugin.dylib" "${DESTINATION_PLUGIN_PATH}"

echo "Update the framework paths..."
install_name_tool -change @rpath/QtWidgets.framework/Versions/5/QtWidgets @rpath/QtWidgets "${DESTINATION_PLUGIN_PATH}"
install_name_tool -change @rpath/QtGui.framework/Versions/5/QtGui @rpath/QtGui "${DESTINATION_PLUGIN_PATH}"
install_name_tool -change @rpath/QtCore.framework/Versions/5/QtCore @rpath/QtCore "${DESTINATION_PLUGIN_PATH}"


echo "Done"
