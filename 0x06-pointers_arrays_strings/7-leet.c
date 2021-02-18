#include "holberton.h"

#define LEET1 "aAeEoOtTlL"
#define LEET2 "4433007711"

/**
 * leet - encodes a string into 1337
 * @s: the string to encode
 * Return: char pointer
 */
char *leet(char *s)
{
char *ret = s, *leet1 = LEET1, *leet2 = LEET2;
int i = 0;

for (; *s; s++)
{
for (i = 0; leet1[i]; i++)
if (*s == leet1[i])
*s = leet2[i];

}
return (ret);
}
