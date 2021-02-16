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

i = 0;
while (i < n)
{
if (i != n - 1)
printf("%d, ", a[i]);
else
printf("%d", a[i]);
i++;
}
printf('\n');
}
