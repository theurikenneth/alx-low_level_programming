#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * set_bit - sets the value of the bit to 1 at a given index
 * @n: the number to modify
 * @index: the index of the number to modify
 *
 * Return: 1 or -1 if its successful and unsuccessful, respectively
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > sizeof(unsigned long int) * 8)
return (-1);

return ((*n |= 1 << index) ? 1 : -1);
}
