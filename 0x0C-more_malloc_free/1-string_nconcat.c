#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
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
unsigned int a, b = 0, len = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 == "";

len += _strlen(s1) + n;

concat = malloc((sizeof(char) * len) +1);

if (concat == NULL)
return (NULL);

for (a = 0; s1[a]; a++)
{
concat[a] = s1[a];
}
for (; n || !s2; n--; a++, b++)
{
concat[a] = s2[b];
}

concat[a] = '\0';

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
