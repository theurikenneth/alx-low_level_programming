#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an array if integers
 * @min: the minimum value
 * @max: the maximum value
 * Return: the array pointer or NULL
 */
int *array_range(int min, int max)
{
int *array;
int i, j, count;

if (min > max)
return (NULL);

count = ((max - min) + 1)
array = malloc(sizeof(int) * count);

if (array ==NULL)
return (NULL);

j = min;

for (i = 0; i < count; i++, j++)
array[i] = j;

return (array);
}
