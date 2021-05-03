#!/bin/bash
gcc -fPIC -shared -Wall -Werror -Wextra -pendantic -o "lib${1:-all}.so" *.c
