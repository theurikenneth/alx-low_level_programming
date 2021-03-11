#include "variadic_functions.h"

/**
 * sum_them_all - computes the sum of arguments
 * @n: the number of arguments
 * @...: the unnamed arguments
 *
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
int sum = 0;
unsigned int remaining = n;

/* initialize valist for the n number of arguments */
va_start(args, n);

/* access all the arguments assigned to valist */
while (remaining--)
sum += va_arg(args, int);

/* clean memory reserved for args */
va_end(args);

return (sum);
}
