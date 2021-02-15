#include "holberton.h"
#include <string.h>

/**
 * puts_half - prints second half of a string
 * @str: string to be printed
 * Return: void
 */
void puts_half(char *str)
{
int i, j;
for (j = 0; str[j] != '\0'; j++)
;
for (i = j / 2 + (j % 2 ? 1 : 0); i < j; i++)
_putchar(str[i]);
_putchar('\n');
}
