#include "lists.h"

/**
 * add_node_end - adding a new node to the beginning
 * @head: pointer to the 1st element
 * @str: content of each node
 *
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *new_element, *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	while (str[i] != '\0')
		i++;
	node->len = i;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	new_element = *head;
	while (new_element->next != NULL)
	{
		new_element = new_element->next;
	}
	new_element->next = node;

	return (node);
}
