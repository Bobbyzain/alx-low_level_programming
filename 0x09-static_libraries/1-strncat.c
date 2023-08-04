#include "main.h"
#include <stdio.h>

/**
 * _strncat - my special function
 * Description: to copy elements in a string to a destination
 * @dest: a char pointer param that the location to copy to
 * @src: a char param containing the source string
 * @n: an int param for the number of characters in the string to cat
 * Return: The content of the destination file
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
	int k;

	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	k = j;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[k + i] = src[i];
	}
	dest[k + i] = '\0';
	return (dest);
}
