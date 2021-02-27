#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints number of argument
 * @argv: arguments
 * @argc: number of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int results;

if (argc < 3)
{
printf("Error\n");
return (1);
}

results = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", results);
return (0);
}
