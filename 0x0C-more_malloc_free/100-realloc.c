#include "holberton.h"
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _memcpy - copy of the memory area
 * @dest: pointer to the target area start
 * @src: pointer to the source area start
 * @n: number of bytes
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
dest[i] = src[i];

return (dest);
}

/**
 * _realloc - relocates memory using malloc and free
 * @ptr: previous memory pointer
 * @old_size: old space for ptr in bytes
 * @new_size: new space for ptr in bytes
 *
 * Return: NULL or new_ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *new_ptr;

if (ptr == NULL)
return (malloc(new_size));

if (new_size == 0)
{
free(ptr);
return (NULL);
}

if (new_size == old_size)
return (ptr);

newptr = malloc(new_size);
if (newptr == NULL)
return (NULL);

_memcpy(newptr, ptr, old_size);
free(ptr);

return (new_ptr);
}
