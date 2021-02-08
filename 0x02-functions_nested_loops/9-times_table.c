#include "holberton.h"

/**
 * times_table - write a function that prints the 9 times table, starting with 0
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
int n, m, mult;
for (n = 0; n <= 9, n++)
{
_putchar('0');
for (m = 1; m <= 9; m++)
{
_putchar(',');
_putchar(' ');
mult = n * m;

if (mult <= 9)
_putchar(' ');
else
_putchar((mult / 10) + '0');
_putchar((mult % 10) + '0');
}
_putchar('\n');
}
}
