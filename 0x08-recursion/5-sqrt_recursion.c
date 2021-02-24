#include "holberton.h"

/**
 * comparison - compares whether there is a square root
 * @n: original number
 * @i: counter to compare the multiplication
 *
 * Return: the square root
 */
int comparison(int n, int i)
{
if (i * i == n)
{
return (i);
}
else if (i * i > n)
{
return (-1);
}
return (comparison(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root
 * @n: the number
 *
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
return (comparison(n, 1));
}
