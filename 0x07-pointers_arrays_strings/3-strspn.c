#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a substring
 * @s: the string
 * @accept: the substring
 *
 * Return: the length of the substring as an integer
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int a = 0, b, c= 0;

while (accept[a])
{
b = 0;

while (s[b] != 32)
{
if (accept[a] == s[b])
{
c++;
}
b++;
}
a++;
}
return (c);
}
