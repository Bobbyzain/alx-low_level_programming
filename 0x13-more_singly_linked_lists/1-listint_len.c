#include "lists.h"

/**
 * listint_len - the number of elements in a listint_t list
 * @h: nodes in the list
 *
 * Return: No of nodes
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (i);
	while (h != NULL)
	{
		/*printf("%d\n", h->n);*/
		i++;
		h = h->next;
	}
	return (i);
}
