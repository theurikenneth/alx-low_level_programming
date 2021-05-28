#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: The hash table to look into
 * @key: The key to finding
 *
 * Return: The value associated with the element
 * or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *ptr;
unsigned long int index;

if (ht == NULL || ht->size == 0 ||
key == NULL || *key == 0)
return (NULL);
index = hash_djb2((const unsigned char *) key);
index %= ht->size;
ptr = ht->array[index];
while (ptr != NULL)
{
if (strcmp(ptr->key, key) == 0)
break;
}
if (ptr == NULL)
return (NULL);
return (strdup(ptr->value));
}
