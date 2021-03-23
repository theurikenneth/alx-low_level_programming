#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints elements of a linked list
 * @h: the head of the linked list
 *
 * Return: number of nodes of a linked list
 */
size_t print_listint(const listint_t *h)
{

if (h != NULL)
{
printf("%d\n", h->n);
return (print_listint(h->next) + 1);
}

return (0);
}
