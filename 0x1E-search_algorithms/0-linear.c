#include "search_algos.h"

/**
 * linear_search - Search for a value in an array
 *
 * @array: array to search
 * @size:  length of array
 * @value:  value to search for
 *
 * Return: Index if value is found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
