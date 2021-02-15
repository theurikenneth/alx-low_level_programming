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
char *a, *s2;

a = s;
while (s[j] != '\0')
{
j++;
}
for (l = 1; l < j; l++)
{
a++;
}
for (i = 0; i < (j / 2); i++)
{
s2 = s[i];
s[i] = *a;
*a = s2;
a--;
}
}
