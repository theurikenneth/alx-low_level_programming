#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - prints the number of arguments
 * @argv: arguments
 * @argc: number of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int results = 0, i = 0, j = 1;

for (j = 1; j < argc; j++)
{
for (i = 0; argv[j][i]; i++)
if (argv[j][i] > '9' || argv[j][i] < '0')
{
printf("Error\n");
return (1);
}
results += strtol(argv[j], NULL, 10);
}

printf("%d\n", results);
return (0);
}
