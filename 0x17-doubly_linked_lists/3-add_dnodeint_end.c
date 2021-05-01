#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - add new node at the end
 * @head: the head of the list
 * @n: value of the new node
 *
 * Return: new node at the end
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *newnode = NULL;
dlistint_t *endnode;

if (head)
{
newnode = malloc(sizeof(*newnode));
if (newnode)
{
newnode->n = n;
newnode->next = NULL;

endnode = *head;

if (endnode)
{
while (endnode->next)
endnode = endnode->next;

newnode->prev = endnode;
endnode->next = newnode;
}
else
{
newnode->prev = NULL;
*head = newnode;
}
}
}
return (newnode);
}
