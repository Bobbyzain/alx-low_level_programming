#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - special function
 * @size: the number of xters in the array
 * @c: the charaters to use for the function
 *
 * Return: Null if size is 0 else pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *s;

	s = malloc(sizeof(*s) * size);
	if (s == NULL)
		exit(1);
	if (size <= 0)
		return (NULL);
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
	free(s);
}
