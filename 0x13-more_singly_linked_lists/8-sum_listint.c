#include "lists.h"

/**
 * sum_listint - find the sum of all data in a linked list
 * @head: Pointer to the linked list
 * Return: Always int
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
