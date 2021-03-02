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
int i, l = 0;

if (str == NULL)
return (NULL);

while (str[l] != '\0')
{
l++;
}
l++;

duplicate = malloc(l * sizeof(char));

if (duplicate == NULL)
return (NULL);

for (i = 0, str[i] != '\0'; i++)
{
duplicate[i] = str[i];
}
return (duplicate);
}
