#include "lists.h"
#include <stdio.h>

/**
 * print_listint - fills the memory with a constant byte
 * @h: the dog's owner
 * Return: the number
 */
size_t print_listint(const listint_t *h)
{
int n = 0;

while (h != NULL)
{
printf("%d\n", h->n);
n++;
h = h->next;
}
return (n);
}
