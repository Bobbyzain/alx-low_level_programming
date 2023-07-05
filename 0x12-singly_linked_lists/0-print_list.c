#include "lists.h"

/**
 * print_list - Printing the data in the nodes of linked lists
 * @h: the structure of each node
 *
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *c = h;
	int i = 0;

	if (c == NULL)
		return (i);
	if (c->str == NULL)
	{
		printf("[0] (nil)\n");
		i++;
		c = c->next;
	}
	while (c != NULL)
	{
		printf("[%d] %s\n", c->len, c->str);
		c = c->next;
		i++;
	}
	return (i);
}
