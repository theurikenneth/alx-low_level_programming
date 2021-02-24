#include "holberton.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number - checks whether integer is a prime number
 * @n: the number to be checked
 *
 * Return: whether or not its a prime number
 */
int is_prime_number(int n)
{
return (check_prime(n, 1));
}

/**
 * check_prime - checks whether a number is prime
 * @n: the number
 * @i: the iteration times
 *
 * Return: 1 for prime, 0 for composite
 */
int check_prime(int n, int i)
{
if (n <= 1)
return (0);

if (n % i == 0 && i > 1)
return (0);

if ((n / i) < i)
return (1);

return (check_prime(n, i + 1));
}
