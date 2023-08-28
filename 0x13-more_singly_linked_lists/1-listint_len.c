#include "lists.h"

/**
 * listint_len - number of elements in a list
 * @h: pointer to list
 * Return: Always int
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *c = h;
	int i = 0;

	if (c == NULL)
		return (i);
	while (c != NULL)
	{
		c = c->next;
		i++;
	}
	return (i);
}
