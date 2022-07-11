#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first integer to swap
 * @b: second integer to swap with first
 *
 * Return: swapped integers
 */

void swap_int(int *a, int *b)
{
	int d;

	d = *a;
	*a = *b;
	*b = d;

}


