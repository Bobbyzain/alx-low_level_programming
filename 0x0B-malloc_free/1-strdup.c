#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - special function
 * @str: a pointer of xters in the array
 *
 * Return: Null if size is 0 else pointer to array
 */

char *_strdup(char *str)
{
	int i = 0;
	char *t;

	t = malloc(*str);
	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		t[i] = str[i];
		i++;
	}
	/* str[i] = '\0'; */
	return (t);
	free(t);
}
