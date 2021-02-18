#include "holberton.h"

/**
 * _strncpy - copies a string
 * @dest: the destination buffer
 * @src: the source buffer
 * @n: the number of bytes to copy
 * Return: pointer to destination buffer
 */

char *_strncpy(char *dest, char *src, int n)
{
char *ret = dest;

while (*src && n)
{
*dest++ = *src++;
n--;
}

while (n--)
*dest++ = '\0';

return (ret);
}
