#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - creates a hash table
 * @size: no. of hash table buckets to create
 *
 * Return: address of new hash table, or NULL if failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *newtable;
unsigned long int i;

if (size == 0)
return (NULL);
newtable = malloc(sizeof(hash_table));
if (newtable == NULL)
return (NULL);

newtable->array = malloc(sizeof(hash_node_t *) * size);
if (newtable->array == NULL)
{
free(newtable);
return (NULL);
}

newtable->size = size;
for (i = 0; i < size; i++)
newtable->array[i] = NULL;
return (newtable);
}
