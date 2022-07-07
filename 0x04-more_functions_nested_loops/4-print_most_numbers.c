#include "main.h"

/**
  * print_most_numbers - print the numbers from 0 up to 9
  *
  * Return: returns the numbers from 0 up to 9
  */
void print_most_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		if ((x == 2) || (x == 4))
		{
			continue;
		}
		else
		{
			_putchar(x);
		}
	}

	_putchar('\n');
}	
