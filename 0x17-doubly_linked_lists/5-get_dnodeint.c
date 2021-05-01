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
if (index && head)
return (get_dnodeint_at_index(head->next, index - 1));

return (head);
}
