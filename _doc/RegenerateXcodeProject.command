#!/bin/bash
#
#	XcodePostProcessing.sh
#
#	This script generates an Xcode project that let you debug the OBS plugin
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
cd "$MYPATH"/../
MYPATH=`pwd -P`

#---------------------------------------------------------------------
# Find qmake in /Applications and ~/Applications
#---------------------------------------------------------------------
QT_APPLICATIONS_FOLDER=( "/Applications/Qt" "$HOME/Applications/Qt" "$HOME/Qt" )

for qtPath in "${QT_APPLICATIONS_FOLDER[@]}"
do
	for qmakePath in $(find "${qtPath}"*/*"/clang_64/bin/qmake")
	do
		QMAKE_PATH="${qmakePath}"
		break
	done
	
	if [ -f "${QMAKE_PATH}" ]
	then
		break
	fi
done

if [ ! -f "${QMAKE_PATH}" ]
then
	echo "*** Could not find qmake! Make sure Qt is installed either in /Applications/Qt*/ or ~/Applications/Qt*/"
	exit 1
fi

echo "Using qmake at path: ${QMAKE_PATH}"

#---------------------------------------------------------------------
# Run qmake
#---------------------------------------------------------------------
${QMAKE_PATH} -spec macx-xcode

#---------------------------------------------------------------------
# Remove qmake.stash file
#---------------------------------------------------------------------
echo "Removing qmake.stash file"
QMAKE_STASH_FILE="${MYPATH}/.qmake.stash"
if [ -f "${QMAKE_STASH_FILE}" ]
then
	rm -rf "${QMAKE_STASH_FILE}"
fi

#---------------------------------------------------------------------
# Ensure that the qt_preprocess.mak file exists
#---------------------------------------------------------------------
QT_PREPROCESS_MAK_PATH="StreamDeckPlugin.xcodeproj/qt_preprocess.mak"
if [ ! -f "${QT_PREPROCESS_MAK_PATH}" ]
then
	echo "*** Could not locate qt_preprocess.mak"
	exit 1
fi

#---------------------------------------------------------------------
# qt_preprocess.mak: Change -DQT_NO_DEBUG to -DQT_DEBUG
#---------------------------------------------------------------------
echo "qt_preprocess.mak: Change -DQT_NO_DEBUG to -DQT_DEBUG"
mv "${QT_PREPROCESS_MAK_PATH}" "${QT_PREPROCESS_MAK_PATH}_tmp"
sed -E $'s/-DQT_NO_DEBUG/-DQT_DEBUG/g' "${QT_PREPROCESS_MAK_PATH}_tmp" > "${QT_PREPROCESS_MAK_PATH}"
rm -rf  "${QT_PREPROCESS_MAK_PATH}_tmp"


#---------------------------------------------------------------------
# Ensure that the project.pbxproj file exists
#---------------------------------------------------------------------
PROJECT_PBXPROJ_PATH="StreamDeckPlugin.xcodeproj/project.pbxproj"
if [ ! -f "${PROJECT_PBXPROJ_PATH}" ]
then
	echo "*** Could not locate project.pbxproj"
	exit 1
fi

#---------------------------------------------------------------------
# project.pbxproj: Change -DQT_NO_DEBUG to -DQT_DEBUG
#---------------------------------------------------------------------
echo "project.pbxproj: Change -DQT_NO_DEBUG to -DQT_DEBUG"
mv "${PROJECT_PBXPROJ_PATH}" "${PROJECT_PBXPROJ_PATH}_tmp"
sed -E $'s/-DQT_NO_DEBUG/-DQT_DEBUG/g' "${PROJECT_PBXPROJ_PATH}_tmp" > "${PROJECT_PBXPROJ_PATH}"
rm -rf  "${PROJECT_PBXPROJ_PATH}_tmp"

#---------------------------------------------------------------------
# project.pbxproj: Remove the -O2 flags
#---------------------------------------------------------------------
echo "project.pbxproj: Remove the -O2 flags"
mv "${PROJECT_PBXPROJ_PATH}" "${PROJECT_PBXPROJ_PATH}_tmp"
sed -E $'s/\"-O2\",//g' "${PROJECT_PBXPROJ_PATH}_tmp" > "${PROJECT_PBXPROJ_PATH}"
rm -rf  "${PROJECT_PBXPROJ_PATH}_tmp"

#---------------------------------------------------------------------
# project.pbxproj: Remove DYLIB_CURRENT_VERSION
#---------------------------------------------------------------------
echo "project.pbxproj: Remove DYLIB_CURRENT_VERSION"
mv "${PROJECT_PBXPROJ_PATH}" "${PROJECT_PBXPROJ_PATH}_tmp"
sed -E $'s/DYLIB_CURRENT_VERSION = \".*\";/DYLIB_CURRENT_VERSION = "";/g' "${PROJECT_PBXPROJ_PATH}_tmp" > "${PROJECT_PBXPROJ_PATH}"
rm -rf  "${PROJECT_PBXPROJ_PATH}_tmp"

#---------------------------------------------------------------------
# project.pbxproj: Remove DYLIB_COMPATIBILITY_VERSION
#---------------------------------------------------------------------
echo "project.pbxproj: Remove DYLIB_COMPATIBILITY_VERSION"
mv "${PROJECT_PBXPROJ_PATH}" "${PROJECT_PBXPROJ_PATH}_tmp"
sed -E $'s/DYLIB_COMPATIBILITY_VERSION = \".*\";/DYLIB_COMPATIBILITY_VERSION = "";/g' "${PROJECT_PBXPROJ_PATH}_tmp" > "${PROJECT_PBXPROJ_PATH}"
rm -rf  "${PROJECT_PBXPROJ_PATH}_tmp"

#---------------------------------------------------------------------
# project.pbxproj: Add the Bundle MACH_O_TYPE
#---------------------------------------------------------------------
echo "project.pbxproj: Remove the -O2 flags"
mv "${PROJECT_PBXPROJ_PATH}" "${PROJECT_PBXPROJ_PATH}_tmp"
sed -E $'s/LIBRARY_STYLE = \"DYNAMIC\";/LIBRARY_STYLE = \"DYNAMIC\"; MACH_O_TYPE = mh_bundle;/g' "${PROJECT_PBXPROJ_PATH}_tmp" > "${PROJECT_PBXPROJ_PATH}"
rm -rf  "${PROJECT_PBXPROJ_PATH}_tmp"
