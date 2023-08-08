#include "main.h"

/**
 * _strdup - Pointer to space in memore
 * @str: String to be stored
 * Return: Pointer
 */

char *_strdup(char *str)
{
	char *s;
	int j = 0, i = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;

	s = malloc(i + 1 * sizeof(char));
	if (s == NULL)
		return (NULL);

	while (j < i)
	{
		s[j] = str[j];
		j++;
	}
	return (s);
}
