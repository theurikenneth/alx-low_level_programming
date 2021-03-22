#include <stdio.h>
#include "lists.h"

/**
 * listint_len - counts the elements in a linked list
 * @h: the head of the linked list
 *
 * Return: the length of the elements
 */
size_t listint_len(const listint_t *h)
{
int len = 0;

if (h != NULL)
{
while (h)
{
h = h->next;
len++;
}
}

return (len);
}
