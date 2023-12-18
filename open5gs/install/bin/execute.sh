#!/bin/bash

# Specify the directory containing your executables
EXECUTABLE_DIR="/home/cdot/5G/open5gs/install/bin"

# Check if the specified directory exists
if [ ! -d "$EXECUTABLE_DIR" ]; then
    echo "Error: Directory not found."
    exit 1
fi

# Change to the specified directory
cd "$EXECUTABLE_DIR" || exit

# Find all executable files and run them in the background
for file in *; do
    if [ -x "$file" ]; then
        ./"$file" &
    fi
done

echo "All executables started in the background."

