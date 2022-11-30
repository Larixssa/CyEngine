#!/bin/sh

# Bash script for building CyEngine.

cmake -G "Visual Studio 17 2022" -A Win32 -S -Bbuild
cmake --build build --target CyEngine --config Release
