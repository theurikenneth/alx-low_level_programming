#include "holberton.h"

/**
 * print_numbers - prints numbers
 *
 * Return: void
 */
void print_numbers(void)
{
int c;
for (c = 0; c <= 9; c++)
{
_putchar(c + '0');
}
_putchar('\n');
}
