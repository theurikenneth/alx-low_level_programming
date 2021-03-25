#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a pointer to a string of 0 and 1 chars
 *
 * Return: 0 or the binary number
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int n = 0, product = 1;
int len;

if (b == '\0')
return (0);

for (len = 0; b[len];)
len++;

for (len -= 1; len >= 0; len--)
{
if (b[len] != '0' && b[len] != '1')
return (0);

n += (b[len] - '0') * product;
product *= 2;
}

return (n);
}
