#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 *
 * Return: Nothing!
 */
void hash_table_delete(hash_table_t *ht)
{
hash_table_t *tmp = ht;
unsigned long int i = 0;
hash_node_t *runner;

while (i < ht->size)
{
runner = tmp->array[i];
while (runner != NULL)
{
free(runner->key);
free(runner->value);
free(runner);
runner = runner->next;
}
i++;
}
free(ht->array);
free(ht);
}
