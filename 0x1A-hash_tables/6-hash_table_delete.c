#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table to frees
 *
 * Return: Nothing!
 */
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *hnode, *tmp;
unsigned long int i;

if (!ht)
return;

for (i = 0; i < (ht->size); i++)
{
hnode = ht->array[i];
while (hnode)
{
tmp = hnode->next;
free(hnode->key);
free(hnode->value);
free(hnode);
hnode = tmp;
}
}
free(ht->array);
free(ht);
}
