#include "lists.h"

/**
 * add_nodeint_end - add a node at the end of a list
 * @head: the pointer to the list
 * @n: the element in the new node
 * Return: address
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *c, *d;

	c = malloc(sizeof(listint_t));
	if (c == NULL)
		return (NULL);
	c->n = n;
	if (*head == NULL)
	{
		*head = c;
		return (c);
	}
	d = *head;
	while (d->next != NULL)
		d = d->next;
	d->next = c;
	return (c);
}
