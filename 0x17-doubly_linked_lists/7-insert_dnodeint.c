#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: the head of the doubly linked list
 * @idx: the index in which insert the new node
 * @n: the number to insert in the new node
 *
 * Return: the address of the new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *current, *newnode;

if (!idx)
return (add_dnodeint(h, n));

if (!h)
return (NULL);

current = *h;

if (!current)
return (NULL);

while (--idx && current->next)
current = current->next;

if (idx)
return (NULL);

newnode = malloc(sizeof(*newnode));
if (!newnode)
return (NULL);

newnode->n = n;
newnode->current = current;
newnode->next = current->next;

if (current->next)
current->next->current = newnode;

current->next = newnode;

return (newnode);

}
