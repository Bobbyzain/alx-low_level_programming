#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * _strdup - special function
 * @str: a pointer of xters in the array
 *
 * Return: Null if size is 0 else pointer to array
 */

char *_strdup(char *str)
{
	int i, j = 0;
	char *t;

	while (str[i] != '\0')
	{
		j++;
		i++;
	}
	t = malloc(sizeof(*str) * 1024);
	printf("%d\n", j);
	if (str == NULL)
		return (NULL);
	if (t == NULL)
		exit(1);
	i = 0;
	while (str[i] != '\0')
	{
		t[i] = str[i];
		i++;
	}
	/* str[i] = '\0'; */
	return (t);
	free(t);
}
