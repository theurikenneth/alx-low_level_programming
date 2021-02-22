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
int i, j, sum = 0;

for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (i == j || i + j == size - 1)
{
sum = sum + a[(i) * (j)];
}
}
}
printf("%d\n", sum);
}
