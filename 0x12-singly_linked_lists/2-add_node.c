#include "lists.h"

/**
 * add_node - adding a new node to the beginning
 * @head: pointer to the 1st element
 * @str: content of each node
 *
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *new_element;

	new_element = malloc(sizeof(list_t));
	if (new_element == NULL)
		return (NULL);
	new_element->str = strdup(str);
	while (str[i] != '\0')
		i++;
	new_element->len = i;
	new_element->next = *head;
	*head = new_element;

	return (new_element);
}
