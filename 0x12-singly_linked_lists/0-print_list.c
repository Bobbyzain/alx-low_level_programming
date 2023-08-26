#include "lists.h"

/**
 * print_list - using singly linked lists
 * @h: list to print
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *c = h;
	size_t x = 0;

	if (c == NULL)
		return (x);
	if (c->str == NULL)
	{
		printf("[0] (nil)\n");
		c = c->next;
		x++;
	}
	while (c != NULL)
	{
		printf("[%d] %s\n", c->len, c->str);
		c = c->next;
		x++;
	}
	return (x);
}
