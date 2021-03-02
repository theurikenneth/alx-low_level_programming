#include "holberton.h"
#include <stdio.h>

/**
 * free_grid - frees a 2D array of integers
 * @grid: 2D to free
 * @height: height of the grid
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
free(grid[i]);

free(grid);
}
