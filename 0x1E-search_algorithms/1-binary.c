#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of value or -1
 */
int binary_search(int *array, size_t size, int value)
{
/* making declarations */
int low, mid, high;

low = 0;
high = (int)size - 1;

/* check for nulls in the array */
if (!array)
return (-1);

while (low <= high)
{
print_it(array, low, high)
mid = (low + high) / 2;
if (array[mid] < value)
low = mid + 1;
else if (array[mid] > value)
high = mid - 1;
else
return (mid);
}
return (-1);
}

/**
 * print_it - prints the array searched
 * @arr: first element of the array
 * @first: [0] first element
 * @last: last element to print
 */
void print_it(int *arr, int first, int last)
{
printf("Searching in array: ");
for (; first <= last; first++)
{
if (first == last)
printf("%d\n", arr[first]);
else
printf("%d, ", arr[first]);
}
}
