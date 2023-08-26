#include "lists.h"

/**
 * free_list - frees a list
 * @head: pointer to list to be freed
 *
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *node = head, *next;

	while (node != NULL)
	{
		next = node->next;
		free(node->str);
		free(node);
		node = next;
	}
}

