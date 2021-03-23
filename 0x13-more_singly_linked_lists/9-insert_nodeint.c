#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node in a given position
 * @head: head of the linked list
 * @idx: node of insert
 * @n: position to insert
 *
 * Return: NULL or new linked list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node;

if (!head)
return (NULL);
if (idx && *head)
return (insert_nodeint_at_index(&(*head)->next, idx - 1, n));
if (idx)
return (NULL);

new_node = malloc(sizeof(listint_t));
if (!new_node)
return (NULL);

new_node->n = n;
new_node->next = *head;

*head = new_node;

return (new_node);
}
