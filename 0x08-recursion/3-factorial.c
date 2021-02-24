#include "holberton.h"
#include <stdio.h>

/**
 * factorial - returns factorial of a number
 * @n: the number
 *
 * Return: the factorial
 */
int factorial(int n)
{
if (n < 0)
return (-1);

else if (n <= 1)
return (1);

return (n * factorial(n - 1));
}
