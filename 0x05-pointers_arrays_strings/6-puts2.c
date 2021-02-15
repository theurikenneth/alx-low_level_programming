#include "holberton.h"
#include <string.h>

/**
 * puts2 - printscharacter of a string
 * @str: characters of the string
 * Return: void
 */
void puts2(char *str)
{
int i, j = 0;
for (; str[j] != '\0')
{
j++;
}
for (i = 0; i < j; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
