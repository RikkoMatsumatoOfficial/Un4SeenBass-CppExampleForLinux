#!/bin/bash


mkdir -p build/bin
cmake -DCMAKE_BUILD_TYPE=Release -S . -B build
cmake --build build
make
echo "This Shell Script is Created by Rikko Matsumato"
