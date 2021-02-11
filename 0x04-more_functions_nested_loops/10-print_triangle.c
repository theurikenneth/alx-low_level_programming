#include "holberton.h"

/**
 * print_triangle - prints character _
 *@size: number of times to print character _
 * Return: void
 */
void print_triangle(int size)
{
int a, b, c;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (a = 0; a < size; a++)
{
for (b = size - a; y > 1; b--)
{
_putchar(32);
}
for (c = 0; c <= a; c++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
