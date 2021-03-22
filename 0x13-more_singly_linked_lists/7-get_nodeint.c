#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: head of the linked list
 * @index: number of nth node
 * 
 * Return: NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int len = 0;

if (head)
{
while (head)
{
if (len == index)
return (head);

head = head->next;
len++;
}
}

return (NULL);
}
