#include "holberton.h"

/**
 * _strncpy - copies a string
 * @dest: pointer for the first string
 * @src: pointer for the second string
 * @n: string is n bytes
 * Return: void
 */

char *_strncpy(char *dest, char *src, int n)
{
int a;

for (a = 0; dest[a] != '\0'; a++)
{
dest[a] = src[a];
}
src[a] = '\0';
return (dest);
}
