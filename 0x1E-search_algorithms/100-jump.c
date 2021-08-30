#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches for a value in a sorted
 * array of integers
 * @array: pointer to the first element to search
 * @size: the size of the array
 * @value: value to search for
 * Return: index of value or -1
 */
int jump_search(int *array, size_t size, int value)
{
/* stating declarations */
int jump, x;

/* checks for the nulls in the array */
if (!array)
return (-1);

jump = sqrt(size);

for (x = 0; x < (int)size && array[x] < value; x += jump)
printf("Value checked array[%d] = [%d]\n", x, array[x]);

printf("Value found between indexes [%d] and [%d]\n", x - jump, x);

for (x -= jump; x < (int)size; x++)
{
printf("Value checked array[%d] = [%d]\n", x, array[x]);
if (array[x] == value)
return (x);
}
return (-1);
}
