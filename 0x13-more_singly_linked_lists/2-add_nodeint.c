#include "lists.h"

/**
 * add_nodeint - add node at the beginning of a list
 * @head: pointer to the list
 * @n: number to add
 * Return: address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *c;

	c = malloc(sizeof(listint_t));
	if (c == NULL)
		return (NULL);
	c->n = n;
	c->next = *head;
	*head = c;
	return (c);
}
