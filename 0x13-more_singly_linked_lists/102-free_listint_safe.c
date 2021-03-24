#include "lists.h"

size_t looped_listint_count(listint_t *h);
size_t free_listint_safe(listint_t **head);

/**
 * free_listint_safe - frees all elements of a linked list
 * @head: pointer to the first node
 *
 * Return: size of the list freed
 */
size_t free_listint_safe(listint_t **head)
{
listint_t *temp;
size_t nodes, index;

nodes = looped_listint_count(*head);

if (nodes == 0)
{
for (; head != NULL && *head != NULL; nodes++)
{
temp = (*head)->next;
free(*head);
*head = temp;
}
}

else
{
for (index = 0; index < nodes; index++)
{
temp = (*head)->next;
free(*head);
*head = temp;
}
*head = NULL;
}

head = NULL;

return (nodes);
}

/**
 * looped_listint_count - counts the number of unique nodes
 * @h: pointer to the head of the linked list
 *
 * Return: 0 or number of unique nodes
 */
size_t looped_listint_count(listint_t *h)
{
listint_t *t, *i;
size_t nodes = 1;

if (h == NULL || h->next == NULL)
return (0);

t = h->next;
i = (h->next)->next;

while (i)
{
if (t == i)
{
t = h;
while (t != i)
{
nodes++;
t = t->next;
i = i->next;
}

t = t->next;
while (t != i)
{
nodes++;
t = t->next;
}
return (nodes);
}

t = t->next;
i = (i->next)->next;
}

return (0);
}
