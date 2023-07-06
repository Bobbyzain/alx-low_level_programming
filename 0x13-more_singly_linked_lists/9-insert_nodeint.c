#include "lists.h"

/**
 * insert_nodeint_at_index - adds a new node to a list at a given point
 * @head: pointer
 * @idx: index location to add node
 * @n: element
 *
 * Return: address of a new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *h = *head;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (h == NULL)
		return (NULL);
	while (i < idx - 1 && h != NULL)
	{
		i++;
		h = h->next;
	}
	/*h->next = new_node;*/
	new_node->next = h->next;
	h->next = new_node;


	return (h);
}
