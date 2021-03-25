#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: the number to modify
 * @index: the index in the number to modify
 *
 * Return: 1 or -1 if successful or unsuccessful, respectively
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index < sizeof(unsigned long int) * 8)
{
*n &= (~(1 << index));
return (1);
}

return (-1);
}
