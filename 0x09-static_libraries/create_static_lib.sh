#!/bin/bash

#compile all the .c files into object files
gcc -c -Wall -pedantic -Wextra *.c

#creates a library all and add copies of the object files
ar -rc liball.a *.o
