#include "holberton.h"
#include <stdlib.h>
char *_mem(char *s, char b, unsigned int n);

/**
 * _calloc - allocates memory using malloc
 * @nmemb: number of elements
 *@size: bytes
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *memb;

if (nmemb == 0 || size == 0)
return (NULL);

memb = malloc(nmemb * size);

if (memb == NULL)
return (NULL);

_mem(memb, 0, (nmemb * size));
return (memb);
}

/**
 * _mem - fills the memory
 * @s: character array
 * @b: constant byte
 * @n: number of bytes
 * Return: the pointer
 */

char *_mem(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
s[i] = b;

return (s);
}
