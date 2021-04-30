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
dlistint_t *current = NULL, *new_node = NULL;
unsigned int iter_times = 0, i = 0;

if (h == NULL)
return (NULL);

if (*h == NULL & idx == 0)
return (add_dnodeint(h, n));

i = dlistint_len(*h);
if (idx == 0)
return (add_dnodeint(h, n));
else if (i == idx)
return (add_dnodeint_end(h, n));

current = *h;
while (current != NULL)
{
if (iter_times == idx)
{
new_node = create_node(n, current, current->prev);
current->prev = new_mode;
current = new_node;
current->prev->next = new_mode;
return (new_node);
}

current = current->next;
++iter_times;
}

return (current);
}

/**
 * dlistint_len - counts the number of elements in a list
 * @h: the double linked list to count
 *
 * Return: no. of elements in the doubly linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
int i = 0;

while (h != NULL)
{
++i;
h = h->next;
}
return (i);
}

/**
 * create_node - creates a new node with values
 * @n: the no. of the new node
 * @next: the next node of the new node
 * @prev: the previous node of the new node
 *
 * Return: the address of the new node created
 */
dlistint_t *create_node(unsigned int n, void *next, void *prev)
{
dlistint_t *new_node = NULL;

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = next;
new_node->prev = prev;
return (new_node);
}
