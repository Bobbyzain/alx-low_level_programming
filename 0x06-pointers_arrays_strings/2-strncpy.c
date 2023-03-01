#include "main.h"
#include <stdio.h>

/**
 * _strncpy - my special function
 * Description: to copy elements in a string to a destination
 * @dest: a char pointer param that the location to copy to
 * @src: a char param containing the source string
 * Return: The content of the destination file
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
