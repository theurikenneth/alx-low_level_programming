#include "function_pointers.h"

/**
 * int_index - searches for the integer
 * @array: the array to serach through
 * @size: size of the array
 * @cmp: function to compare
 *
 * Return: 0 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (cmp != NULL && array != NULL)
{
if (size <= 0)
return (-1);

for (i = 0; i < size; i++)
{
if (cmp(array[i]))
break;

if !cmp(array[size - 1]))
return (-1);
}
return (i);
}
return (-1);
}
