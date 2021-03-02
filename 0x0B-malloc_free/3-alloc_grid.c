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

twoD = (int **)malloc(height * sizeof(int *));

if (twoD == NULL)
return (NULL);

for (i = 0; i < height, i++)
{
(twoD + i) = (int *)malloc(width * sizeof(int));
{
if (twoD + i == NULL)
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
