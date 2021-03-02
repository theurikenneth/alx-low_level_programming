#include "holberton.h"
#include <stdio.h>

/**
 * create_array - creates an array of characters
 * @size: size of array
 * @c: The specific char to the array
 *
 * Return: 0, NULL or array pointer
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;

if (size == 0)
return (NULL);

array = malloc(size * sizeof(char));

if (array == NULL)
return (NULL);

for (i = 0; i < size; i++)
array[i] = c;

return (array);
}
