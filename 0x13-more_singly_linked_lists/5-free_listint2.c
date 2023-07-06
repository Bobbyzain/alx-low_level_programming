#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: pointer to list to be freed
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *node = *head, *next;

	while (node != NULL)
	{
		next = node->next;
		free(node);
		node = next;
	}
	*head = NULL;
}
