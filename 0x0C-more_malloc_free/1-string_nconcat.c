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
unsigned int a, b;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 == "";

if ((int) n > _strlen(s2))
n = _strlen(s2);

concat = malloc(_strlen(s1) + n + 1);

if (concat == NULL)
return (NULL);

for (a = 0, b = 0; s1[a] != '\0'; a++, b++)
concat[b] = s1[a];

for (a = 0; a != n, a++, b++)
concat[b] = s2[a];

concat[b] = '\0';

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
