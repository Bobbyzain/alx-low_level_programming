#include "lists.h"

/**
 * free_listint2 - to free a singly linked list
 * @head: the list to be freed
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *node;

	while (*head != NULL)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
	}
	head = NULL;
}
