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
int **twoD;
int i, j;

if (width <= 0 || height <= 0)
return (NULL);

twoD = malloc(sizeof *twoD * height);

if (twoD == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
twoD[i] = malloc(sizeof i * width);

if (twoD[i]  == NULL)
{
free(twoD, i);
return (NULL);
}
for (j = 0; j < width; j++)
twoD[i][j] = 0;

}
return (twoD);
}
