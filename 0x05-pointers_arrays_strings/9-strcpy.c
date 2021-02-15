#include "holberton.h"

/**
 * _strcpy - copies the strinf pointed to by src
 * @dest: destination value
 * @src: source value
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
if (dest == src || src == 0)
return (dest);
while (src[i])
{
dest[i] = src[i];
i++;
}
dest[i] = src[i];
return (dest);
}
