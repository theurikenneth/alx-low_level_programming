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
int l = 0;

if (*head != NULL)
{
new_head = (*head)->next;
l = (*head)->l;
free(*head);
*head = new_head;
}

return (l);
}
