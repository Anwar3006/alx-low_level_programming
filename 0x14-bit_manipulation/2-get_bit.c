#include <main.h>

/**
* get_bit - Gets the value of a bit at a given index.
* @n: The bit.
* @index: The index to get the value at - indices start at 0.
*
* Return: If an error occurs - -1.
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int comp_i = 0;

	while (n)
	{
		if (comp_i == index)
		{
			if (n % 2)
				return (1);
			else
				return (0);
		}

		n = n / 2;
		comp_i++;
	}

	if (index > comp_i && index < 63)
		return (0);

	return (-1);
}
