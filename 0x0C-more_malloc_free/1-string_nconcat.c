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
int n1 = 0, n2 = 0;

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

for (n = 0, n < n1; ++n, ++concat)
*concat = s1[n];

for (n = 0; n < n2; ++n, ++concat)
*concat = s2[n];

*concat = '\0';

return (concat - n1 - n2);
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
