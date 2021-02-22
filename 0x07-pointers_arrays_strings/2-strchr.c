#include "holberton.h"
#include <stddef.h>

/**
 * _strchr - locates character in a string
 * @s: string
 * @c: character in the string
 *
 * Return: s
 */
char *_strchr(char *s, char c)
{
unsigned int a;

for (; ; a++)

{
if (s[a] == c)
return (&(s[a]));
if (!s[a])
return (NULL);
}
}
