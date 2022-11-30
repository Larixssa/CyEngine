:: Batch File script for building CyEngine.

powershell -command cmake -G "Visual Studio 17 2022" -A Win32 -S -Bbuild
powershell -command cmake --build build --target CyEngine --config Release
