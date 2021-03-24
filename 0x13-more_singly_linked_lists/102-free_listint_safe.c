#include "lists.h"

/**
 * free_listint_safe - frees all elements of a linked list
 * @head: pointer to the first node
 *
 * Return: size of the list freed
 */
size_t free_listint_safe(listint_t **head)
{
listptr_t *listptr_head = NULL;
listint_t *next;
size_t size;

if (!head)
return (0);

for (size = 0; *head; ++size)
{
if (listptr_contains(listptr_head, *head))
{
*head = NULL;
break;
}

if (!add_nodeptr(&listptr_head, *head))
{
free_listptr(listptr_head);
exit(98);
}

next = (*head)->next;
free(*head);
*head = next;
}

free_listptr(listptr_head);

return (size);
}
