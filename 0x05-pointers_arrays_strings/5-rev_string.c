#include "holberton.h"
#include <string.h>

/**
 * rev_string - prints a string in reverse
 * @s: string to be printed in reverse
 * Return: void
 */
void rev_string(char *s)
{
int i, j, l;
char *s, *s2;

for (i = 0; s[i] != '\0'; i++)
l++;
j = 0;

for (i = l - 1; i >= 0; i--)
{
s2[j] = s[i];
j++;
}
s2[j] = '\0';
}
