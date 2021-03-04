#include "holberton.h"

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

for (i = 0; i < n; ++i, ++src)
dest[i] = *src;

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
void *new_ptr;

if (new_size == old_size)
return (ptr);

if (!ptr)
return (malloc(new_size));

if (!new_size)
{
free(ptr);
return (NULL);
}

new_ptr = malloc(new_size);
if (!new_ptr)
return (NULL);

_memcpy(new_ptr, ptr, old_size < new_size ? old_size : new_size);
free(ptr);

return (new_ptr);
}
