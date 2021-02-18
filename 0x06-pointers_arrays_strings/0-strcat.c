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

while (dest[i] != '\0')
i++;

while (src[len] != '\0')
dest[i++] = src[len++];
dest[i] = '\0';

return (dest);
}
