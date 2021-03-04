#include "holberton.h"
#include <stdlib.h>

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
s2 = "";

if (s1)
{
while (s1[n1])
++n1;
}
if (s2)
{
while (n2 < n && s2[n2])
++n2;
}

concat = malloc(sizeof(char) * n1 + n2 + 1));

if (concat == NULL)
return (NULL);

for (n = 0, n < n1; ++n, ++concat)
*concat = s1[n];

for (n = 0; n < n2; ++n, ++concat)
*concat = s2[n];

*concat = '\0';

return (concat - n1 - n2);
}
