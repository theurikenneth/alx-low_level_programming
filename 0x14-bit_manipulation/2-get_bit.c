#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * get_bit - returns the value of a bit in a given index
 * @n: the number to find the index
 * @index: the index to find
 *
 * Return: -1, 0 or 1
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int i = 0;

while (n)
{
if (i == index)
{
if (n % 2)
return (1);
else
return (0);
}
n = n / 2;
i++;
}

if (index > i && index < 63)
return (0);

return (-1);
}
