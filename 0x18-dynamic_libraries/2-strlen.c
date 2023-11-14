#include "main.h"

/**
 * _strlen - my special function
 * Description: to get the length of a given string
 * @s: an int parameter that collects the local variable within main
 * Return: my description
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		++i;
	}
	return (i);
}
