#include <variadic_function.h>
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */


int sum_them_all(const unsigned int n, ...)
{
    va_list value;
    int i;
    int sum = 0;
    
    va_start(value, n);
    
    for (i = 0; i < n; i++)
    {
        if (n == 0)
        {
            return 0;
        }
        else
        {
            sum += va_arg(value, int);
        }
    }
    printf("%d", sum);
    putchar('\n');
    va_end(value);
}
