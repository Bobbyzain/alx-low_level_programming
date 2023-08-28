#include "lists.h"

/**
 * print_listint - printing all elements of a list
 * @h: pointer to list
 * Return: Always int
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *c = h;
	int i = 0;

	if (c == NULL)
		return (i);
	while (c != NULL)
	{
		printf("%d\n", c->n);
		c = c->next;
		i++;
	}
	return (i);
}
