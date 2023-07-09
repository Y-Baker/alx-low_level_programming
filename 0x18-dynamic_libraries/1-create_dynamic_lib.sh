#!/bin/bash

gcc -c -fPIC *.c
gcc -o liball.so -shared *.o
