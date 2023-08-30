#include "lists.h"

/**
 * insert_nodeint_at_index - to insert a new node in a given position
 * @head: pointer to the linked list
 * @idx: the position to insert in
 * @n: the number to insert at given position
 * Return: Pointer
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0, k = 0;
	listint_t *c, *d = *head, *s = *head;

	c = malloc(sizeof(listint_t));
	if (c == NULL)
		return (NULL);
	c->n = n;
	c->next = NULL;
	if (*head == NULL)
	{
		*head = c;
		return (c);
	}
	while (s != NULL)
	{
		s = s->next;
		k++;
	}
	if (idx == 0)
	{
		c->next = *head;
		*head = c;
		return (c);
	}
	if (idx == k)
	{
		s->next = c;
		return (c);
	}
	while (i < idx - 1)
	{
		if (d == NULL)
			return (NULL);
		i++;
		d = d->next;
	}
	c->next = d->next;
	d->next = c;
	return (c);
}
