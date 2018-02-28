@echo off
REM
REM	RegenerateLIBs.bat
REM
REM	This script generates the obs.lib and obs-frontend-api.lib from the respective DLLs
REM
REM

REM Add the path to dumpbin and lib from Visual Studio 2015
SET PATH=%PATH%;C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\bin\

REM Generate obs.lib
dumpbin /exports obs.dll > obs.txt
echo LIBRARY obs > obs.def
echo EXPORTS >> obs.def
for /f "skip=19 tokens=4" %%A in (obs.txt) do echo %%A >> obs.def
lib /def:obs.def /out:obs.lib /machine:x64
del obs.txt obs.def obs.exp

REM Generate obs-frontend-api.lib
dumpbin /exports obs-frontend-api.dll > obs-frontend-api.txt
echo LIBRARY obs-frontend-api > obs-frontend-api.def
echo EXPORTS >> obs-frontend-api.def
for /f "skip=19 tokens=4" %%A in (obs-frontend-api.txt) do echo %%A >> obs-frontend-api.def
lib /def:obs-frontend-api.def /out:obs-frontend-api.lib /machine:x64
del obs-frontend-api.txt obs-frontend-api.def obs-frontend-api.exp