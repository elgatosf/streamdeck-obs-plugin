# Debugging the OBS Stream Deck plugin on macOS using Xcode


## Requirements

- Xcode 9.2 or later
- Qt 5.9 or later installed in /Applications/Qt\*/ or ~/Applications/Qt\*/


## Setup


### Creating the Xcode project

1. Double-click on _doc/RegenerateXcodeProject.command to generate an Xcode project. You should see in at the root path the new project StreamDeckPlugin.xcodeproj


### Updating the scheme

1. In Xcode open the StreamDeckPlugin scheme
2. In the Run step, change the Executable to /Applications/OBS.app/Contents/Resources/bin/obs



## Building and debugging with Xcode


1. In Xcode use Product > Build to build the debug plugin
2. Run in a Terminal window from the _doc folder: sudo ./InstallDebugPluginMac.sh
3. In Xcode use Product > Run to debug the plugin in OBS

This will launch OBS and you will be able to set breakpoints in the plugin.
