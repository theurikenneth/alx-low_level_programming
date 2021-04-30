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
dlistint_t *freememory;

if (head == NULL)
return (NULL);

freememory = head->next;

while (freememory != NULL)
{
free(head);
head = freememory;
freememory = freememory->next;
}
free(head);
}
