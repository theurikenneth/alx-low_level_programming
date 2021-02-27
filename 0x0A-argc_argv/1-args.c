#include "holberton.h"
#include <stdio.h>

/**
 * main - prints number of arguments 
 * @argv: arguments
 * @argc: number of arguments
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", (argc - 1));
return (0);
}
