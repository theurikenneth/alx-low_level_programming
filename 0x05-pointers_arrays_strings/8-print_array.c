#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

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
printf("%d", a[i]);
if (i + 1 < n)
printf(", ");
}
printf('\n');
}
