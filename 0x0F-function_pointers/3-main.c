#include "3-calc.h"
#include <stdio.h>

/**
 * main - the calculator
 * @argc: size of the argument vector
 * @argv: the argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int (*f)(int, int);

if (argc != 4)
{
puts("Error");
exit(98);
}

if (get_op_func(argv[2]) == NULL)
{
printf("Error\n");
exit(99);
}

printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));

return (0);
}
