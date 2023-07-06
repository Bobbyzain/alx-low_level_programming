#include "lists.h"

/**
 * free_list - frees a list
 * @head: pointer to list to be freed
 *
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *node = head, *current;

	while (node->next != NULL)
	{
		free(node->str);
		current = node->next;
		free(node);
		node = node->next;
		free(current);
	}
	free(node->next);
	free(node);
	free(current);
}
