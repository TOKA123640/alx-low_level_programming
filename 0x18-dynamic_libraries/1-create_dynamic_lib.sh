#!/bin/bash
gcc -ePIC -c *.c
gcc -shared -o liball.so *.o
