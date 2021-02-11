#include "holberton.h"

/**
 * more_numbers - prints 0-14 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
int c, n;
for (n = 0; n <= 9; n++)
{
for (c = 0; c <= 14; c++)
{
if (c > 9)
{
_putchar((c / 10) + '0');
}
_putchar((c % 10) + '0');
}
_putchar('\n');
}
}
