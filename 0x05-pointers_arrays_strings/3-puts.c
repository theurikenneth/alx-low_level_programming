#include "holberton.h"

/**
 * _puts - prints a string
 * @str: string to be printed
 * Return: void
 */
void _puts(char *str)
{
int a;

a = 0;
while (*(str + 1) != '\0')
{
_putchar(*(str + a));
 a++;
}
_putchar('\n');
}
