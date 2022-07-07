#include "main.h"
#include <stdio.h>

/**
  * print_number - Prints an integer.
  * @n: The integer to prints.
  *
  * Return: Nothing!
  */
void print_number(int n)
{
	unsigned int b = i;

	if (i < 0)
	{
		i *= -1;
		b = i;
		_putchar('-');
	}

	b = b/10;

	if (b != 0)
		print_number(b);

	_putchar((unsigned int) i % 10 + '0');

}
