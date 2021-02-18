#include "holberton.h"

/**
 * _strcat - concetenates two strings
 * @dest: string is appended to dest
 * @src: string to be appended
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
char *ret = dest;

while (*dest)
dest++;

while (*src)
*dest++ = *src++;

*dest = *src;

return (ret);
}
