#define _GNU_SOURCE
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

  unsigned long int index;
  hash_node_t *newnode, *ptr;
  char *newval;

  if (key == NULL || *key == 0 || value == NULL || ht == NULL
      || ht->array == NULL || ht->size == 0)
    return (0);
  index = key_index((const unsigned char *) key, ht->size);
  ptr = ht->array[index];
  while (ptr != NULL)
    {
      if (strcmp(ptr->key, key) == 0)
	break;
      ptr = ptr->next;
    }
  if (ptr == NULL)
    {
      newnode = malloc(sizeof(hash_node_t));
      if (newnode == NULL)
	return (0);
      newnode->key = strdup(key);
      if (newnode->key == NULL)
	{
	  free(newnode);
	  return (0);
	}
      newnode->value = strdup(value);
      if (newnode->value == NULL)
	{
	  free(newnode->key);
	  free(newnode);
	  return (0);
	}
      newnode->next = ht->array[index];
      ht->array[index] = newnode;
    }
  else
    {
      newval = strdup(value);
      if (newval == NULL)
	return (0);
      free(ptr->value);
      ptr->value = newval;
    }
  return (1);
}
