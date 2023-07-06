#include "lists.h"

/**
 * pop_listint - deleting 1st node
 * @head: pointer to 1st node
 *
 * Return: 1st node data
 */

int pop_listint(listint_t **head)
{
	int j = 0;
	listint_t *firstnode = *head, *node;

	if (firstnode == NULL)
		return (j);
	j = firstnode->n;
	node = firstnode->next;
	free(firstnode);
	*head = node;
	return (j);
}
