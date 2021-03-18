#include "lists.h"
#include <stdio.h>

/**
 * print_list - fills the memory with a constant byte
 * @h: the dog's owner
 * Return: the number
 */
size_t print_list(const list_t *h)
{
size_t n = 0;

while (h != NULL)
{
n++;
printf("%d\n", h->n);
h = h->next;
}
return (n);
}
