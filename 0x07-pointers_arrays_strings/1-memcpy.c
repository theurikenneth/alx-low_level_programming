#include "holberton.h"

/**
 * _memcpy - copies the memory area
 * @dest : memory area dest
 * @src: memory area src
 * @n: n bytes to be changed
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;

for (a = 0; a < n; a++)
{
dest[a] = src[a];
}
return (dest);
}

