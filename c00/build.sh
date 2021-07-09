#!/bin/bash

CC=gcc
CFLAGS="-Wall -Wextra -Werror"

if [ ! -d build ]; then
	echo "Creating build/ dir..."
	mkdir build/
fi

if [ ! -f main_$1.c ]; then
	echo "ERROR: main_$1.c is not present, cannot compile..."
elif [ ! -f $1/*.c ]; then
	echo "ERROR: Directory $1 or no $1/*.c file is not present, cannot compile..."
else
	set -x
	bash -c "$CC $CFLAGS -o build/$1 main_$1.c $1/*.c"
fi
