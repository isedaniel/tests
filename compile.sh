#!/bin/bash
# My compile script

if [ -z "$1" ]; then
	echo "Usage: compile.sh filename (without .cpp)";
	exit 1
fi

output="$1"
source="$1".cpp

if g++ -o $output -ggdb -pedantic-errors -Wall -Weffc++ -Wextra -Wconversion -Wsign-conversion $source -std=c++20; then
	exit 0
else
	exit 1
fi
