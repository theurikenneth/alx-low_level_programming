#include "holberton.h"

/**
 * print_number - should print the number
 * @n: the number to be printed
 *Return: void
 */
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n / 10 != 0)
{
print_number(n / 10);
}
_putchar(n % 10 + '0');
}
