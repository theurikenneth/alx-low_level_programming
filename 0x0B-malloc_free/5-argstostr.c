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
char *s;
int arg, j, i, len = ac;

if (ac == 0 || ac == NULL)
return (NULL);

for (arg = 0; arg < ac; arg++)
{
for (j = 0; av[arg][j]; j++)
len++;
}

 str = (char *)malloc((len + 1) * sizeof(char));

if (str == NULL)
return (NULL);

i = 0;

for (arg = 0; arg < c; arg++)
{
for (j = 0; av[arg][j]; j++)
str[i++] = av[arg][j];

str[i++] = '\n';
}

str[len] = '\0';

return (str);
}
