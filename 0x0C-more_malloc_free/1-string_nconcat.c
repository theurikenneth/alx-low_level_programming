#include "holberton.h"
#include <stdlib.h>
int _strlen(char *s);

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: bytes
 *
 * Return: NULL or a pointer to the memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int n1 = 0, n2 = 0;
unsigned int a, b, f, d, e, length;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 == "";
n1 = _strlen(s1);
n2 = _strlen(s2);
length = n1 + n2;

if (n >= n2)
concat = malloc(sizeof(char) * (length + 1));

else
concat = malloc(sizeof(char) * (length + 1));

if (concat == NULL)
return (NULL);

for (d = 0; d < n1; d++)
{
*(concat + d) = *(s1 + d);
}
if (n >= n2)
{
a = n1;
e = 0;
while (a < length)
{
*(concat + a) = *(s2 + e);
a++;
e++;
}
*(concat + a) = '\0';
}
else
{
b = n1;
f = 0;
while (f < n)
{
*(concat + b) = *(s2 + f);
b++;
f++;
}
*(concat + b) = '\0';
}
return (concat);
}

/**
 * _strlen - returns the string length
 * @s: string pointer
 *
 * Return: string length
 */
int _strlen(char *s)
{
int c = 0;

while (s[c] != '\0')
c++;

return (c);
}
