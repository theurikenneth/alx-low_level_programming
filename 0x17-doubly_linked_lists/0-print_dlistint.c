#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - prints the elementsof a list
 * @h: head of the list
 *
 * Return: nodes
 */
size_t print_dlistint(const dlistint_t *h);
{
unsigned int i = 0;

if (h == NULL)
return (0);

while (h != NULL)
{
printf("%d\n", h->n);
i++;
h = h->next;
}
return (i);
}
