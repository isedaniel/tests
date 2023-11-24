#!/bin/bash
# My compile script

if [ -z "$1" ];
then echo "Usage: compile.sh filename (without .cpp)";
fi

file="$1".cpp

g++ -o $1 -ggdb -pedantic-errors -Wall -Weffc++ -Wextra -Wconversion -Wsign-conversion $file -std=c++20
