#include "main.h"

/**
 * _calloc - to allocate memory
 * @nmemb: number of elements in array
 * @size: byte size of each element
 * Return: Pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i = 0;

	if (size == 0 || nmemb == 0)
		return (NULL);
	s = malloc(size * nmemb);
	if (s == NULL)
		return (NULL);
	while (i < nmemb)
	{
		s[i] = 0;
		i++;
	}
	return (s);
}
