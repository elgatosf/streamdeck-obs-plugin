# Debugging the OBS Stream Deck plugin on Windows using Visual Studio


## Requirements

- Visual Studio 2015 or later
- Qt 5.9 or later installed and included in Path environment variable


## Setup


### Creating the Visual Studio project

1. Open command line (cmd.exe)
2. Go to path of streamdeck-obs-plugin (For example: "cd C:\Sources\streamdeck-obs-plugin"
3. Enter "qmake -tp vc" to create Visual Studio project
4. Open newly created StreamDeckPlugin.vcxproj



## Changing Settings in Visual Studio


1. In Visual Sudio left click StreamDeckPlugin project and choose Properties 
2. Click "Configuration Manager..." button on upper right
3. Configuration Manager is seen -> Change "Active solution configuration:" combo box on upper left to Release
4. Click "Close"
5. Change Settings to enable Debugging
	- Click the C/C++ node. Set Debug Information Format to C7 compatible (/Z7) or Program Database (/Zi).
	- Select the Optimization node. Set Optimization to Disabled (/Od)/
    - Expand Linker and click the General node. Set Enable Incremental Linking to No (/INCREMENTAL:NO).
	- Select the Debugging node. Set Generate Debug Info to Yes (/DEBUG).
	- Select the Optimization node. Set References to /OPT:REF and Enable COMDAT Folding to /OPT:ICF

## Building and Debugging in Visual Studio
1. Build project using Visual Studio
2. Copy Files to OBS plugins installation, for example (C:\Program Files (x86)\obs-studio\obs-plugins\64bit) 
	- StreamDeckPlugin0.dll
	- StreamDeckPlugin0.ilk
	- StreamDeckPlugin0.lib 
	- StreamDeckPlugin0.pdb
	- StreamDeckPlugin0.exp
3. Delete StreamDeckPlugin.dll file
4. Launch OBS Studio
5. In Visual Studio select "Debug/Attach to Process" or enter shortcut "Ctrl + Alt + P")
6. Attach to Process is seen -> Select "obs64.exe" in "Available Processes" list and double click it
7. Know the break points set in Visual Studio should work
