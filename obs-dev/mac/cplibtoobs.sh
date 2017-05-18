#!/bin/bash

~/Desktop/changeRpath.sh $1
cp $1 /Applications/OBS.app/Contents/Resources/obs-plugins/

cp /Users/vic/Qt5.4.1/5.4/clang_64/lib/QtNetwork.framework/Versions/5/QtNetwork .
install_name_tool -change /Users/vic/Qt5.4.1/5.4/clang_64/lib/QtCore.framework/Versions/5/QtCore @rpath/QtCore ./QtNetwork
cp ./QtNetwork /Applications/OBS.app/Contents/Resources/bin

/Applications/OBS.app/Contents/MacOS/OBS&



