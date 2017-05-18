#!/bin/bash

install_name_tool -change /Users/vic/Qt5.4.1/5.4/clang_64/lib/QtWidgets.framework/Versions/5/QtWidgets @rpath/QtWidgets $1
install_name_tool -change /Users/vic/Qt5.4.1/5.4/clang_64/lib/QtGui.framework/Versions/5/QtGui @rpath/QtGui $1
install_name_tool -change /Users/vic/Qt5.4.1/5.4/clang_64/lib/QtCore.framework/Versions/5/QtCore @rpath/QtCore $1
install_name_tool -change /Users/vic/Qt5.4.1/5.4/clang_64/lib/QtNetwork.framework/Versions/5/QtNetwork @rpath/QtNetwork $1
