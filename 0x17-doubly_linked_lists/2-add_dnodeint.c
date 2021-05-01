#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - add a new node
 * @head: head of the current list
 * @n: value of the new node list
 *
 * Return: address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *newnode = NULL;

if (head)
{
newnode = malloc(sizeof(*newnode));
if (newnode)
{
newnode->n = n;
newnode->prev = NULL;
newnode->next = *head;

if (*head)
(*head)->prev = newnode;

*head = newnode;
}
}
return (newnode);
}
