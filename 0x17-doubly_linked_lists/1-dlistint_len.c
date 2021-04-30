#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - the number of elements
 * @h: head of the double list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
int i = 0;

while (h != NULL)
{
++i;
h = h->next;
}
return (i);
}
