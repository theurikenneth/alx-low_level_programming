#include <stdio.h>

/**
 * main - prints all arguments
 * @argv: arguments
 * @argc: number of arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i != argc)
printf("%s\n", argv[i++]);

return (0);
}
