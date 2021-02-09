#include "holberton.h"

/**
 * times_table - write a function that prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
int n, m, mult;
for (n = 0; n <= 9, n++)
{
for (m = 0; m <= 9; m++)
{
mult = n * m;
if (mult / 10)
_putchar(mult / 10 + '0');
else if (m > 0)
_putchar(' ');
_putchar(mult % 10 + '0');
if (m < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
