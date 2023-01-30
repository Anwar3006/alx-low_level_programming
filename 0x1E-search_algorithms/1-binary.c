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

int binary_search(int *array, size_t size, int value)
{
	size_t firstIndex = 0;
	size_t lastIndex = size - 1;

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
 * Return: The first index where value is located
 */

int binary_search_wrapper(int *array, int value, size_t firstIndex, size_t lastIndex)
{
	size_t midIndex = (firstIndex + lastIndex) / 2;

	printf("Searching in array: ");

	size_t i;
	for (i = firstIndex; i <= lastIndex; i++)
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
