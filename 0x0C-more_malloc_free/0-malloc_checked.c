#include "main.h"

/**
 * malloc_checked - to allocate memory
 * @b: Integer input used to determine the required mem size
 * Return: Pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *s;

	s = malloc(b);
	if (s == NULL)
		exit(1);
	return (s);
}
