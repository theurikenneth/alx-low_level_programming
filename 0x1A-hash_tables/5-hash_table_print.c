#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table to prints
 *
 * Return: Nothing!
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int idx;
hash_node_t *ptr;
int first = 1;

if (ht == NULL)
return;
printf("{");
for (idx = 0; idx < ht->size; idx++)
for (ptr = ht->array[idx]; ptr != NULL; ptr = ptr->next)
{
if (first)
{
printf("'%s': '%s'", ptr->key, ptr->value);
first = 0;
}
else
printf(", '%s': '%s'", ptr->key, ptr->value);
}
printf("}\n");
}
