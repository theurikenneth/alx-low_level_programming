#include "function_pointers.h"

/**
 * array_iterator - executes the function
 * @array: the array
 * @size: size of the array
 * @action: the pointer to the function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array != NULL && action != NULL)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
