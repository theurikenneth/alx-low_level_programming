#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string
 * @str: the string
 *
 * Return: NULL, pointer to the string
 */
char *_strdup(char *str)
{
char *duplicate;
int i, l;

if (str == NULL)
return (NULL);

for (l = 0; str[l] != '\0'; l++)
;

duplicate = (char *)malloc(l + 1 * sizeof(char));

if (duplicate != NULL)
{
for (i = 0; str[i] != '\0'; i++)
duplicate[i] = str[i];
}
else
{
return (NULL);
}
duplicate[i] = '\0';
return (duplicate);
}
