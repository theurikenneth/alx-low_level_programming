#include "holberton.h"

/**
 * is_prime_number - checks whether integer is a prime number
 * @n: the number to be checked
 *
 * Return: whether or not its a prime number 
 */
int is_prime_number(int n)
{
int i;

for (i = 2; i <= n / 2; i++)
{
if (n % i == 0)
{
return (1);
}
}

return (0);
}
