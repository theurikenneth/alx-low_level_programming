#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - fills the memory with a constant byte
 * @h: linked list
 *
 * Return: the number
 */
size_t print_list(const list_t *h)
{
size_t n = 0;

while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", h->len, h->str);

h = h->next;
n++;
}

return (n);
}
