#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - memory to free
 * @head: head of the list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
if (head)
{
free_dlistint(head->next);
free(head);
}
}
