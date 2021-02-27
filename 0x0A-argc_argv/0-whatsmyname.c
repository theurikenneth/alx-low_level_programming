#include "holberton.h"
#include <stdio.h>

/**
 * main - prints its name
 * @argc: argument count
 * @argv: strings that come after calling function
 * Return: void
 */
int main(int argc, char *arg[])
{
if (argc == 1)
printf("%s\n", argv[0]);
else
{
argv[0] = argv[4];
printf("%s\n", argv[0]);
}
return (0);
}
