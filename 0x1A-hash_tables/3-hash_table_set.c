#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - adds the element to the hash table
 * @ht: the hash table to add/update the key/value
 * @key: the value key
 * @value: the value associated with the key
 *
 * Return: 1 or 0 if it succeeds, or otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int i = 0;
hash_node_t *element = NULL, *new_node = NULL;

if (ht == NULL || key == NULL || (strcmp(key, "") == 0))
return (0);

i = key_index(unsigned char *) key, ht->size);
element = ht->array[i];

if (element && strcmp(key, element->key) == 0)
{
free(element->value);
element->value = strdup(value);
return (1);
}

new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
return (0);

new_node->key = strdup(key);
new_node->value = strdup(value);
new_node->next = ht->array[i];
ht->array[i] = new_node;
return (1);
}
