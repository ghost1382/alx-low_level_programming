#!/bin/bash

# a script that creates a static library
# called liball.a from all the 
gcc -c *.c
ar rc liball.a *.o
echo y | rm -I *.o
