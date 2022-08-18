#include "main.h"

/**
 * binary_to_uint - Convert binary value to unsigned int value
 * @b: Pointer to string of char 0 and 1
 * 
 * Return: Value in Base 10
 */

unsigned int binary_to_uint(const char *b)
{
    unsigned int dex = 0, weight = 1;
    int rem, bin;
    b = &dex;

    if (b == NULL)
    {
        return (0);
    }

    while (bin != 0)
    {
        rem = bin % 10;
        dex = dex + rem * weight;
        bin = bin / 10;
        weight = weight * 2;
    }
    return (dex);
}