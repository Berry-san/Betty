#!/bin/bash
gcc *.c -c -fPIC
gcc *.c -fPIC -shared -o liball.so
