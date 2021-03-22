#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - frees a linked list
 * @head: the head of the linked list
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
listint_t *temp;

while (head)
{
temp = head;
head = head->next;
free(temp);
}

free(head);
}
