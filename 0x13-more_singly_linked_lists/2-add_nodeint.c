#include "lists.h"

/**
 * add_nodeint - adds a new node to beginning of list
 * @head: pointer
 * @n: element
 *
 * Return: address of a new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *h;

	h = malloc(sizeof(listint_t));
	if (h == NULL)
		return (NULL);
	h->n = n;
	h->next = *head;
	*head = h;

	return (h);
}
