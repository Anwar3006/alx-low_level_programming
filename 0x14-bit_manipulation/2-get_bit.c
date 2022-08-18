#include <main.h>

/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The bit.
 * @index: The index to get the value at - indices start at 0.
 *
 * Return: If an error occurs - -1.
 * */

int get_bit(unsigned long int n, unsigned int index)
{
    int n, index, bitStatus;

    /* Right shift n, index times and perform bitwise AND with 1 */
    bitStatus = (n >> index) & 1;

    return bitStatus;
}