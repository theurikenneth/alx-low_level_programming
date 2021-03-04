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
unsigned int length = n, i;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (i = 0; s1[i]; i++)
length++;

concat = malloc(sizeof(char) * length + 1));

if (concat == NULL)
return (NULL);

length = 0;

for (i = 0, s1[i]; i++)
concat[length++] = s1[i];

for (i = 0; s2[i] && i < n; i++)
concat[length++] = s2[i];

concat[length++] = '\0';

return (concat);
}
