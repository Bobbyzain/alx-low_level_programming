#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * str_concat - special function
 * @s1: a pointer to xters in the array
 * @s2: a pointer to xters in the array
 *
 * Return: Null if size is 0 else pointer to array
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char *t;

	if (s1 == NULL || s2 ==  NULL)
	{
		s1 = '\0';
		s2 = '\0';
	}

	while (s1[i] != '\0')
        {
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	t = malloc(sizeof(char) * (i + j + 1));

	if (t == NULL)
		exit(1);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		t[k] = s1[i];
		i++;
		k++;
	}
	while (s2[j] != '\0')
	{
		t[k] = s2[j];
		j++;
		k++;
	}

	return (t);
	free(t);
}
