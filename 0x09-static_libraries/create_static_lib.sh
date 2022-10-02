#!/bin/bash
gcc -wall -pedantic -wextra -c *.c
ar rc liball.a *.o
