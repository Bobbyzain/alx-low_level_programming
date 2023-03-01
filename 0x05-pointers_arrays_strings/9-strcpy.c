#include "main.h"
#include <stdio.h>

/**
 * _strcpy - my special function
 * Description: to copy elements in a string to a destination
 * @dest: a char pointer param that the location to copy to
 * @src: a char param containing the source string
 * Return: The content of the destination file
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
