#include "main.h"
#include <stdio.h>

/**
 * _strcat - my special function
 * Description: to copy elements in a string to a destination
 * @dest: a char pointer param that the location to copy to
 * @src: a char param containing the source string
 * Return: The content of the destination file
 */

char *_strcat(char *dest, char *src)
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
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[k + i] = src[i];
	}
	dest[k + i] = '\0';
	return (dest);
}
