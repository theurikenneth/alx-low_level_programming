#include "holberton.h"

/**
 * _strncat - concetenates two strings
 * @dest: string to be concatenates into
 * @src: string to be concatenated
 * @n: number of bytes
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
int a, b;

for (a = 0; dest[0] != '\0'; a++
{
}
for (b = 0; b < n && src[b] != '\0'; b++)
{
dest[a] = src[b];
a++;
}
dest[a] = '\0';
return (dest);
}
