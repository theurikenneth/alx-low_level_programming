#include "holberton.h"
#include <stdio.h>

/**
 * main - prints all arguments
 * @argv: arguments
 * @argc: number of arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
int i = 0;

for (; i < argc; i++)
printf("%s\n", argv[i]);

return (0);
}
