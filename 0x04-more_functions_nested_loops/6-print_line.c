#include "holberton.h"

/**
 * print_line - prints character _
 *@n: number of times to print character _
 * Return: void
 */
void print_line(int n)
{
int a;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (a = 0; a < n; a++)
{
_putchar(_);
}
_putchar('\n');
}
}
