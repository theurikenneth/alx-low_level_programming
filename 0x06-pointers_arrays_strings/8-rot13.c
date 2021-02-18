#include "holberton.h"

#define ROT13A "ABCDEFGHIJIKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"
#define ROT13B "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwzyzabcdefghijklm"

/**
 * rot13 - encodes a string in rot13
 * @s: the string to encode
 *
 * Return: char pointer
 */
char *rot13(char *s)
{
char *ret = s, *rot13a = ROT13A, *rot13b = ROT13B;

int i = 0;

for (; *s; s++)
{
for (i = 0; rot13a[i]; i++)
if (*s == rot13a[i])
{
*s = rot13b[i];
break;
}
}
return (ret);
}
