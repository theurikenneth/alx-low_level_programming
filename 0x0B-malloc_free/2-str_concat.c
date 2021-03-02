#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: NULL, pointer to the memory
 */
char *str_concat(char *s1, char *s2)
{
char *concat_str = NULL;
int i, n1, n2, l;

l = 0;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (n1 = 0; s1[n1] != '\0'; n1++)
;
for (n2 = 0; s2[n2] != '\0'; n2++)
;

concat_str = (char *)malloc((n1 + n2 + 1) * sizeof(char));

if (concat_str == NULL)
{
return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
concat_str[i] = s1[i];

for (; s2[l] != '\0'; i++)
{
concat_str[i] = s2[l];
l++;
}
return (concat_str);
}
