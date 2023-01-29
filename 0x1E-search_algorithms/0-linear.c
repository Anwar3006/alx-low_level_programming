#include "search_algos.h"

/**
 * linear_search - Search for a value in an array
 * 
 * @array: array to search
 * @size:  length of array
 * @value:  value to search for
 *  
 * @return - Index if value is found
 *           -1 if value not available
 */

int linear_search(int *array, size_t size, int value)
{
    for (int i = 0; i < size; i++)
    {
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);
        if(array[i] == value)
        {
            return i;
        }
    }
    return -1;
}
