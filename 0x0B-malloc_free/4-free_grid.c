#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2D array of integers
 * @grid: 2D to free
 * @height: height of the grid
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
int i;

if (grid == NULL || grid == 0)
{
return;
}

for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
