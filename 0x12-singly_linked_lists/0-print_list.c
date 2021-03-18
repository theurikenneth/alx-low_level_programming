#include "lists.h"

/**
 * print_list - fills the memory with a constant byte
 * @h: the dog's owner
 * Return: the number
 */
size_t print_list(const list_t *h)
{
size_t n;

for (n = 0; h != NULL; n++)
{
if (h->str != NULL)
{
printf("[%d] %s\n", h->len, h->str);
h = h->next;
}
else
{
print("[%d] %s\n", 0, "(nil)");
}
}
return (n);
}
