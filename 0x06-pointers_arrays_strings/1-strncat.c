#include "holberton.h"

/**
 * _strncat - concatenates two strings
 * @dest: the destination buffer
 * @src: the source buffer
 * @n: number of bytes to copy
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
char *ret = dest;

while (*dest)
dest++;

while (*src && n--)
*dest++ = *src++;

*dest = '\0';
return (ret);
}
