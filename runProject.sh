#!/bin/bash

if [ "$(basename "$PWD")" = "semafor" ]; then
    echo "You are in correct directory."
    cmake -B build/ -S .
    pushd build;make;./SemaforProject;popd
else
    echo "You are not in the correct directory. Switching to repo directory"
    cd /home/cristian/projectsc++/semafor/semafor
    cmake -B build/ -S .
    pushd build;make;./SemaforProject;popd
fi
