#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node in a given position
 * @head: head of the linked list
 * @idx: node of insert
 * @n: position to insert
 *
 * Return: NULL or new linked list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *i;
unsigned int count = 1;

if (head)
{
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
if (idx > 0)
{
i = *head;
while (i)
{
if (count == i)
{
new_node->next = i->next;
i->next = new_node;
return (new_node);
}
i = i->next;
count++;
}
if (idx > count)
return (NULL);
}
else
{
new_node->next = *head;
*head = new_node;
}
return (new_node);
}
return (NULL);
}
