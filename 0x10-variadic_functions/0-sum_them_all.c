#include <variadic_function.h>


/** Write a function that returns the sum of all its parameters.
 * Prototype: int sum_them_all(const unsigned int n, ...);
 * If n == 0, return 0
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
