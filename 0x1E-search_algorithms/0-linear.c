#include "search_algos.h"
/**
 * linear_search - looks for value sequantially
 * @array: pointer to the first element to search
 * @size: the size of the array
 * @value: value to search for
 * Return: index of value or -1
 */
int linear_search(int *array, size_t size, int value)
{
size_t index = 0;

if (!array)
return (-1);
while (index < size)
{
printf("Value checked array[%d] = [%d]\n", (int)index, (int)array[index]);
if (value == array[index])
return (index);
index++;
}
return (-1);
}
