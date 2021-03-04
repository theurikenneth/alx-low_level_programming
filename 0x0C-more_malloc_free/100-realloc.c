#include "holberton.h"
#include <stdlib.h>

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
unsigned int i;

if (new_size == old_size)
return (ptr);
if (ptr == NULL)
{
newspace = malloc(new_size);
if (newspace == NULL)
return (NULL);
return (newspace);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
newspace = malloc(new_size);
if (newspace == NULL)
return (NULL);
for (i = 0; i < old_size && i < new_size; i++)
newspace[i] = ((char *)ptr)[i];
free(ptr);
return (newspace);
}
