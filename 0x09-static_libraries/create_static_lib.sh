#!/bin/bash
gcc -c *.c
ar rc libmy.a main.h
ranlib libmy.a
