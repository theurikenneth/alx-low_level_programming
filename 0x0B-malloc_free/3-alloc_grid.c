#include "holberton.h"
#include <stdio.h>

/**
 * alloc_grid - returns a pointer to a 2D array
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: void
 */
int **alloc_grid(int width, int height)
{
int **twoD, i, j;

if (i <= 0 || j <= 0)
return (NULL);

twoD = malloc(height * sizeof(int *));

if (twoD == NULL)
return (NULL);

for (i = 0; i < height, i++)
{
if (twoD[i] == NULL)
{
for (; i >= 0; i--)
free(twoD[i]);

free(twoD);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
twoD[i][j] = 0;
}

return (twoD);
}
