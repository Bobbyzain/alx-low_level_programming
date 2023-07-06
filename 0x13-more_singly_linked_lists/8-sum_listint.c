#include "lists.h"

/**
 * sum_listint - sum of all data in a linked list
 * @head: pointer to list
 *
 * Return: Sum or 0
 */
int sum_listint(listint_t *head)
{
	listint_t *h = head;
	int i = 0;

	if (h == NULL)
		return (i);
	while (h != NULL)
	{
		i += h->n;
		h = h->next;
	}
	return (i);
}
