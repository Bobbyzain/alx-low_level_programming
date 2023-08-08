#include "main.h"

/**
 * create_array - The name of my function
 * @size: The number of bytes in memory required
 * @c: Character
 * Return: Char type
 */

char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	t = malloc(size * sizeof(c));
	if (t == NULL)
		return (NULL);
	while (i < size)
	{
		t[i] = c;
		i++;
	}

	return (t);
}
