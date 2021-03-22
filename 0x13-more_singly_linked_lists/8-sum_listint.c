#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - returns the sum n elements of the linked list
 * @head: head of the linked list
 *
 * Return: total
 */
int sum_listint(listint_t *head)
{
int total = 0;

if (head)
{
while (head)
{
total += head->n;
head = head->next;
}
}
return (total);
}
