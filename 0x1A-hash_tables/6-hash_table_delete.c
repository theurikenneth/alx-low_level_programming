#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - delete a hash table
 * @ht: hash table to delete
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *ptr, *next;
unsigned long int i;

if (ht == NULL)
return;
for (i = 0; i < ht->size; i++)
for (ptr = ht->array[i]; ptr != NULL; ptr = next)
{
next = ptr->next;
free(ptr->key);
free(ptr->value);
free(ptr);
}
ree(ht->array);
free(ht);
}
