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

if (cmp && array)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
}
return (-1);
}
