#include "holberton.h"
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: NULL, pointer to the memory
 */
char *str_concat(char *s1, char *s2)
{
char *concat_str;
int i, j = 0, l = 0;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (i = 0; s1[i] || s2[i]; i++)
l++;

concat_str = malloc(l * (sizeof(char)));

if (concat_str == NULL)
return (NULL);

for (i = 0; s1[i] != '\0'; i++)
concat_str[concat_i++] = s1[i];

for (i = 0; s2[i] != '\0'; i++)
concat_str[concat_i++] = s2[i];

return (concat_str);
}
