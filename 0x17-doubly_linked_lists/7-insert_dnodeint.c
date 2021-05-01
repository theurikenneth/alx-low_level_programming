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
dlistint_t *prev, *newnode;

if (!idx)
return (add_dnodeint(h, n));

if (!h)
return (NULL);

prev = *h;

if (!prev)
return (NULL);

while (--idx && prev->next)
prev = prev->next;

if (idx)
return (NULL);

newnode = malloc(sizeof(*newnode));
if (!newnode)
return (NULL);

newnode->n = n;
newnode->prev = prev;
newnode->next = prev->next;

if (prev->next)
prev->next->prev = newnode;

prev->next = newnode;

return (newnode);

}
