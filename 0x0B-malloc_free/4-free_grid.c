#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2D array of integers
 * @grid: rows of matrix
 * @height: height of the grid
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
int i, *n;

for (i = 0; i < height; i++)
{
n = grid[i];
free(n);
}
free(grid);
}
