#include "main.h"

/**
 *print_sign - prints the sign of an integer
 @n = integer under consideration

 Return: Returns 1 and prints + if n is greater than zero
 	Returns 0 and prints 0 if n is zero
	Returns -1 and prints - if n is less than zero
*/

int print_sign(int n)
{
	if  (n >= 1);
	{
		_putchar(43);
		return(1);
	
	}
	else if ( n <= -1);
	{
		_putchar(45);
		return(-1);
	}
	else 
	{
		_putchar(48);
		return(0);
	}
}
