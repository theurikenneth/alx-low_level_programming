#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: void
 */
int **alloc_grid(int width, int height)
{
int **twoD, i, j, l, *p;

if (width <= 0 || height <= 0)
return (NULL);

twoD = malloc(height * sizeof(int *));

if (twoD == NULL)
{
free(twoD);
return (NULL);
}

for (i = 0; i < height, i++)
{
twoD[i] = malloc(width * sizeof(int));
{
if (twoD  == NULL)
{
for (i = 0; i < height; i++)
{
p = twoD[i];
free(p);
}
free(matrix);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
twoD[i][j] = 0;
}
}

return (twoD);
}
