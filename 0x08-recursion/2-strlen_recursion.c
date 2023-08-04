#include "main.h"

/**
 * _strlen_recursion - The recursive function
 * @s: The string to put
 * Return: None
 */

int _strlen_recursion(char *s)
{
	int i;

	if (*s != '\0')
	{
	i = _strlen_recursion(s + 1);
	i++;
	}
	else
		i = 0;
	return (i);
}
