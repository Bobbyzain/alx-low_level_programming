#include "lists.h"

/**
 * get_nodeint_at_index - getting the nth node of a linked list
 * @head: pointer to linked list
 * @index: the index location of the node to return
 *
 * Return: the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *h = head;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	while (i != index)
	{
		h = h->next;
		i++;
	}
	return (h);
}
