#include "holberton.h"
#include <stdio.h>

/**
 * _strdup - returns a pointer to a new string
 * @str: the string
 *
 * Return: NULL, pointer to the string
 */
char *_strdup(char *str)
{
char *duplicate;
int i, l = 0;

if (str == NULL)
return (NULL);

for (i = 0; str[i]; i++)
l++;

duplicate = malloc((len + 1) * sizeof(char));

if (duplicate == NULL)
return (NULL);

for (i = 0, str[i]; i++)
duplicate[i] = str[i];

duplicate[l] = '\0';

return (duplicate);
}
