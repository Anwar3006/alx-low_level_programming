#include "main.h"

/**
 * _abs - prints the absolute value of an integer
 *@c: the number to be computed
 *
 * Return: value of integer in absolute form or zero
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;

		return (abs_val);
	}

	return (c);
}
