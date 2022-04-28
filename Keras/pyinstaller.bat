@ECHO OFF

echo Packaging...

python -m PyInstaller how-to-forecast.py --icon=NONE

rmdir /s /q build
rmdir /s /q __pycache__ 2>nul
del /s /q how-to-forecast.spec

echo Done!

pause