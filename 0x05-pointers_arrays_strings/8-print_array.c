#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - prints an array
 * @a: first integer
 * @n: no. of elements in an array
 * Return: void
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
if (i != n - 1)
printf("%d, ", *(a + i));
else
printf("%d", *(a + x));
}
_putchar('\n');
}
