#!/bin/bash

echo "Compiling..."
mkdir -p build

echo "Compiling activities"
for i in {1..8}; do
    echo "Compiling Activity $i"
    g++ -o build/a$i activities/a$i.cpp
done

echo "Compiling tracetables"
for i in {1..5}; do
    echo "Compiling Trace Table $i"
    g++ -o build/trace$i tracetables/trace$i.cpp
done

echo "Done."
