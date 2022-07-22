#!/bin/bash
gcc -c main.h
ar rc libmy.a main.o
ranlib libmy.a
