#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - prints the elementsof a list
 * @h: head of the list
 *
 * Return: nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t i = 0;

for ( ; h; h = h->next)
{
printf("%d\n", h->n);
++i;
}
return (i);
}
