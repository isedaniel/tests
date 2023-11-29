#!/bin/bash
# compile and run script

if [ -z "$1" ]; then 
	echo "Usage: sh cnr.sh filename (without .cpp)";
	exit 1
fi

RED='\033[0;31m'
GREEN='\033[0;32m'
NC='\033[0m' # No color

# if everything is okay run, else print error code and exit
if ./compile.sh $1; then
	echo ""
	printf "${GREEN}Running${NC}\n"
	printf "${GREEN}=======${NC}\n"
	echo ""
	./$1;
	exit 0
else
	exit 1
fi

