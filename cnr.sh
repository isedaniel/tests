#!/bin/bash
# My compile script

if [ -z "$1" ];
then echo "Usage: compile.sh filename (without .cpp)";
fi

file="$1".cpp

g++ -o $1 -ggdb -pedantic-errors -Wall -Weffc++ -Wextra -Wconversion -Wsign-conversion $file -std=c++20

RED='\033[0;31m'
NC='\033[0m' # No color
echo
printf "${RED}Running${NC}\n"
printf "${RED}=======${NC}\n"
echo 

./$1

