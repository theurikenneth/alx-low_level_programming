#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * flip_bits - returns the number of bits to flip
 * @n: number of flips
 * @m:to be flipped
 *
 * Return: number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int i = 0, count = 0;

i = n ^ m;
while (i)
{
if (i & 1)
count++;

i >>= 1;
}

return (count);
}
