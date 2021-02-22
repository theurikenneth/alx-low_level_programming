#include "holberton.h"

/**
 * _strpbrk - searches a string for any sets of bytes
 * @s: source string
 * @accept: accepted characters
 *
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
int a = 0, b;

while (s[a])
{
b = 0;

while (accept[b])
{
if (s[a] == accept[b])
{
s += a;
return (s);
}
b++;
}
a++;
}
return ('\0');
}
