#include "main.h"

   /**
  * print_binary - Prints the binary representation of a number
  * @n: The number to representing in binary
  *
  * Return: Nothing
  */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	divdiv(n);
}

/**
  * divdiv - ...
  * @n: ...
  *
  * Return: ...
  */
void divdiv(unsigned long int n)
{
	if (n < 1)
		return;

	divdiv(n >> 1);

	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}