#include "main.h"

/**
 * print_most_numbers - print integers from 0 to 9 excluding 2 and 4
 *
 * Return: integers from 0, 1, 3, and 5 to 9
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; x <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar(i);
		}
	}
	
	_putchar('\n');
}	
