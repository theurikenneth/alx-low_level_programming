#include "holberton.h"

/**
 * print_number - prints the integer
 * @n: the integer to be printed
 * Return: void
 */
void print_number(int n)
{
unsigned int i;

if (n < 0)
{
_putchar('-');
n *= -1;
}

i = n;

if ((i /10) > 0)
print_number(i / 10);

_putchar((i % 10) + '0');
}
