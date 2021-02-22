#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals of a square matrix
 * @a: the matrix
 * @size: the size of the matrix
 *
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
int i, j = 0, sum = 0;

for (i = 0; i < size * size;)
{
j = j + a[i];
i = i + size + 1;
}

for (i = size - 1; i < (size * size) - 1;)
{
sum = sum + a[i];
i = i + (size - 1);
}
printf("%d, %d\n", j, sum);
}
