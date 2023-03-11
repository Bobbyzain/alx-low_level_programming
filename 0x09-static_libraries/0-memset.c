#include "main.h"

/**
 * _memset - My memory set function
 * @s: Pointer to the memory in question
 * @b: The constant byte to fill the memory with
 * @n: The number of address to fill
 * Return: Pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
