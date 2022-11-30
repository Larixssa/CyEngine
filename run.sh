#!/bin/sh

# Run script for CyEngine.

# Check if built just incase.
cmake --build build --target CyEngine --config Release

# Run
./build/Release/CyEngine.exe