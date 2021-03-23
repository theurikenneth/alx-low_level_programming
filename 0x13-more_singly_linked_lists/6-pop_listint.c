#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_listint - deletes the head node of the linked list
 * @head: head of the linked list
 *
 * Return: linked list
 */
int pop_listint(listint_t **head)
{
listint_t *new_head;
int l;

if (!(head && *head))
return (0);

l = (*head)->n;

new_head = (*head);
*head = new_head->next;
free(new_head);

return (l);
}
