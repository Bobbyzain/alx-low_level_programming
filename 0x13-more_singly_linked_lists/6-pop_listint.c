#include "lists.h"

/**
 * pop_listint - to pop off the 1st node
 * @head: the linked list
 * Return: Always int
 */

int pop_listint(listint_t **head)
{
	listint_t *d;
	int q;

	if (*head == NULL)
		return (0);

	q = (*head)->n;
	d = (*head)->next;
	free(*head);
	*head = d;
	return (q);
}
