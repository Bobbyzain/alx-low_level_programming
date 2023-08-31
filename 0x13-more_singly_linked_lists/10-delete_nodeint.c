#include "lists.h"

/**
 * delete_nodeint_at_index - deleting specific nodes
 * @head: pointer to linked list
 * @index: specific node to delete
 * Return: Always int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *c = *head, *f = *head, *d = *head, *e, *h = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	while (c != NULL)
	{
		c = c->next;
		i++;
	}
	if (i == index)
	{
		for (i = 0; i < index - 1; i++)
			d = d->next;
		d->next = NULL;
		free(d);
		return (1);
	}
	if (index == 0)
	{
		h = h->next;
		*head = h;
		return (1);
	}
	i = 0;
	while (i < index)
	{
		if (h == NULL)
		{
			free(h);
			return (-1);
		}
		h = h->next;
		i++;
	}
	e = h->next;
	i = 0;
	while (i < index - 1)
	{
		if (f == NULL)
		{
			free(f);
			return (-1);
		}
		f = f->next;
		i++;
	}
	f->next = e;
	mem_clean(*head, h, c);
	return (1);
}
void mem_clean(listint_t *head, listint_t *other, listint_t *next)
{
	free(other);
	free(next);
	if (head != NULL)
	{
		free(head);
		head = NULL;
	}
}
