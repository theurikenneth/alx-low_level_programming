#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index
 * @head: head of the double linked list
 * @index: position of the index to delete
 *
 * Return: linked list after deleting
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *old, *prev;

if (!head)
return (-1);

old = *head;

if (!old)
return (-1);

if (index)
{
prev = old;

while (--index && prev->next)
prev = prev->next;

if (index)
return (-1);

old = prev->next;

if (!old)
return (-1);

prev->next = old->next;

if (prev->next)
prev->next->prev = prev;
}
else
{
*head = old->next;

if (*head)
(*head)->prev = NULL;
}
free(old);
return (1);
}
