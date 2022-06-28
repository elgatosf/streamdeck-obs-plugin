
# Stream Deck OBS plugin (deprecated)

This project is superseded by the new [Stream Deck - OBS Studio plugin 2.0](https://github.com/elgatosf/streamdeck-obs-plugin2)

---

This is the source code of the Stream Deck OBS plugin for Windows and macOS.


## Building

- Make sure you are using [Qt 5.10.1](https://www.qt.io). OBS is compiled using this Qt version.
- Open OBSPlugin4StreamDeck.pro in QtCreator and compile the project.


## Updating libobs

The OBS plugin needs to be linked against: 

- libobs
- libobs-frontend-api


You can get the precompiled libraries and source code for Windows and macOS here:
[https://github.com/jp9000/obs-studio/releases](https://github.com/jp9000/obs-studio/releases)


### Windows

1. Download the latest OBS-Studio-xx.y.z-Full.zip (for example OBS-Studio-21.0.1-Full.zip)
2. Unzip the file
3. Copy the following files to obs-dev/bin/win:
	- bin/64bit/obs.dll
	- bin/64bit/obs-frontend-api.dll
4. Run the Batch script obs-dev/bin/win/RegenerateLIBs.bat to geenrate obs.lib and obs-frontend-api.lib


### macOS

1. Download the latest installer obs-mac-xx.y.z-installer.pkg (for example obs-mac-21.0.3-installer.pkg)
2. Install OBS
3. Copy the following files to obs-dev/bin/mac:
	- /Applications/OBS.app/Contents/Resources/bin/libobs.0.dylib
	- /Applications/OBS.app/Contents/Resources/bin/libobs-frontend-api.dylib


### Headers

1. Download the source code used by the precompiled libraries
2. Update the required header files in obs-dev/headers
