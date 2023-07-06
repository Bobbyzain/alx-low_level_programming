#include "lists.h"

/**
 * add_nodeint_end - adds a new node to end of list
 * @head: pointer
 * @n: element
 *
 * Return: address of a new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *h, *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	h = *head;
	while (h->next != NULL)
		h = h->next;
	h->next = node;
	return (node);
}
