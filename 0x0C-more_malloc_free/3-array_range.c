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
unsigned int count;

if (min > max)
return (NULL);

count = max - min;
array = malloc(sizeof(int) * (count + 1));

if (array == NULL)
return (NULL);

do {
*array++ = min++;
} while (min <= max);

return (array - count - 1);
}
