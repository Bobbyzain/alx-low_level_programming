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
	unsigned int i = 0;
	listint_t *c, *d = *head;

	if (*head == NULL)
		return (NULL);
	c = malloc(sizeof(listint_t));
	if (c == NULL)
		return (NULL);
	c->n = n;
	while (i < idx)
	{
		if (d == NULL)
			return (NULL);
		d = d->next;
		i++;
	}
	c->next = d->next;
	d->next = c;
	free (c);
	return (d);
}
