#include "search_algos.h"

/**
 * binary_search - Implements Binary search to locate elements of an array
 *
 * @array: Array to use
 * @size:  Length of array
 * @value: Value to search
 *
 * Return: Index of found value or -1 if not found
 */

int binary_search(int *array, int size, int value)
{
	int firstIndex = 0;
	int lastIndex = size - 1;

	return (binary_search_wrapper(array, value, firstIndex, lastIndex));
}

/**
 * binary_search_wrapper - a wrapper function for the binary_search function
 *
 * @array: Array to use
 * @firstIndex:  As name suggests
 * @lastIndex:  As name suggests
 * @value: Value to search
 *
 * Return: int
 */
int binary_search_wrapper(int *array, int value, int firstIndex, int lastIndex)
{
	int midIndex = (firstIndex + lastIndex) / 2;

	printf("Searching in array: ");
	for (int i = firstIndex; i <= lastIndex; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");

	if (firstIndex > lastIndex)
		return (-1);

	if (array[midIndex] == value)
	{
		return (midIndex);
	}
	else if (array[midIndex] < value)
	{
		firstIndex = midIndex  + 1;
		return (binary_search_wrapper(array, value, firstIndex, lastIndex));
	}
	else
	{
		lastIndex = midIndex - 1;
		return (binary_search_wrapper(array, value, firstIndex, lastIndex));
	}
}
