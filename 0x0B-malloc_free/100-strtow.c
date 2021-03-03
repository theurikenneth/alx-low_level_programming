#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow -splits a string in words
 * @str: a pointer to the string to split
 *
 * Return: NULL or a pointer
 */
char **strtow(char *str)
{
char **s;
int wordno, i, j, len, l,  idx, k;

wordno = 0;
i = 0;

while (*(str + i) != '\0')
{
if (*(str + i) != 32 && *(str + i) != '\0')
{
j = i;
while (*(str + j) != 32 && *(str + j) != '\0')
j++;
wordno++;
i = j;
}
i++;
}

s = (char **)malloc(sizeof(char *) * (wordno + 1));
if (s == 0)
{
free(s);
return (0);
}

idx = 0;
j = 0;
i = 0;
while (*(str + i) != '\0')
{
if (*(str + i) != 32 && *(str + i) != '\0')
{
j = i;
len = 0;
while (*(str + j) != 32 && *(str + j) != '\0')
{
len++;
j++;
}
*(s = idx) = (char *)malloc(sizeof(char) * (len + 1));
if (*(s + idx) == 0)
{
for (k = 0; k < idx; k++
free(*(s + k));
free(s);
return (0);
}
idx++;
i = j;
}
i++;
}
idx = 0;
j = 0;
i = 0;
while (*(str + i) != '\0')
{
if (*(str + i) != 32 && *(str + i) != '\0')
{
j = i;
l = 0;

while (*(str + j) != 32 && *(str + j) != '\0')
{
s[idx][l] = *(str + j);
l++
j++;
}
s[idx][l] = '\0';
idx++;
i = j;
}
i++;
}
s[idx][0] = '\0';
return (s);
}
