#include "holberton.h"
#include <string.h>

/**
 * rev_string - prints a string in reverse
 * @s: string to be printed in reverse
 * Return: void
 */
void rev_string(char *s)
{
int i = 0;
int l = 0;
char t;

for (i = 0; s[i]; i++)
l++;

for (i = 0; i < l / 2; i++)
{
t = s[l - i - 1];
s[l - i - 1] = s[i];
s[i] = t;
}
}
