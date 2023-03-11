#include "main.h"

/**
 * _memcpy - My memory copy function
 * @dest: Pointer to the destination memory in question
 * @src: Pointer to the memory location I want to copy from
 * @n: The number of address to fill
 * Return: Pointer to the memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
