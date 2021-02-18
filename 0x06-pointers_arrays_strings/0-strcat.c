#include "holberton.h"

/**
 * _strcat - concetenates two strings
 * @dest: string is appended to dest
 * @src: string to be appended
 * Return: dest
 */
char *_strcat(char *dest, char *src);
{
int i = 0, len = 0;

while (dest[i++])
len++;

for (i = 0; src[i]; i++)
dest[len++] = src[i];

return (dest);
}
