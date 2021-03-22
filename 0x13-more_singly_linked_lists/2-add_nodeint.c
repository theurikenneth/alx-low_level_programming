#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - adds a node at the beginning of the list
 * @head: the head of the linked list
 * @n: the value to add to the new list
 *
 * Return: the address of the new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_list;

if (head != NULL)
{
new_list = malloc(sizeof(listint_t));
if (new_list == NULL)
return (NULL);

new_list->n = n;
new_list->next = *head;
*head = new_list;

return (new_list);
}

return (NULL);
}
