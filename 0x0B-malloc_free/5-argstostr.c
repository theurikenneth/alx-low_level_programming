#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the program's arguments
 * @ac: the number of arguments
 * @av: an array of pointers
 *
 * Return: 0, NULL or string pointer
 */
char *argstostr(int ac, char **av)
{
char *s = NULL;
int i, j, k, l;

k = 0;
l = 0;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
l++;
}

s = (char *)malloc((l + ac + 1) * sizeof(char));

if (s == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
s[k] = av[i][j];
k++;
}
s[k] = '\n';
k++;
}

s[k] = '\0';

return (s);
}
