#include "lists.h"

/**
 * get_nodeint_at_index - an element in the nth node
 * @head: the linked list
 * @index: element of interest
 * Return: pointer to list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (0);

	while (i < index)
	{
		head = head->next;
		i++;
	}
	return (head);
}
