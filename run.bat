:: Run script for CyEngine.

:: Check if built just incase.
cmake --build build --target CyEngine --config Release

:: Run
powershell -command ./build/Release/CyEngine.exe