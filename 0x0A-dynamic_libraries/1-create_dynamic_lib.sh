#!/bin/bash

gcc -fPIc -c -Wall -Werror -Wextra -pedantic *.c
gcc -shared -o liball.so *.o
