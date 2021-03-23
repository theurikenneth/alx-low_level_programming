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
size_t n = 0;

if (h != NULL)
{
while (h)
{
printf("%d\n", h->n);
h = h->next;
h++;
}
}
return (n);
}
