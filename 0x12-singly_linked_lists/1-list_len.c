#include "lists.h"

/**
 * list_len - a singly linked list
 * @h: input list
 * Return: num of elements
 */

size_t list_len(const list_t *h)
{
	const list_t *c = h;
	int x = 0;

	if (c == NULL)
		return (x);
	if (c->str == NULL)
	{
		x++;
		c = c->next;
	}
	while (c != NULL)
	{
		c = c->next;
		x++;
	}
	return (x);
}
