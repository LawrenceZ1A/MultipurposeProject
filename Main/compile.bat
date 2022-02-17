@ECHO OFF

del /s /q EXE\MultipurposeProject.exe

gcc C\MultipurposeProject.c

move "a.exe" "EXE\MultipurposeProject.exe"

pause
