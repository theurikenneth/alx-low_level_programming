#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - gets the nth node
 * @head: head of the list
 * @index: index of the list
 *
 * Return: value of the lists' pointer
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int nodes = 0;
dlistint_t *temp = head;

if (head == NULL)
return (NULL);

while (temo != NULL)
{
nodes++;
if (nodes - 1 == index)
return (temp);
temp = temp->next;
}
return (NULL);
}
