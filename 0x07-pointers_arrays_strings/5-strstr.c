#include "main.h"

/**
 * _strstr - My function
 * @haystack: The string to parse through
 * @needle: The string whose xters we are to search for
 * Return: pointer to the beginning of located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int k;

	k = 0;
	while (*haystack != needle[k])
	{
		haystack++;
	}
	while (*haystack ==  needle[k])
	{
		return (haystack);
		haystack++;
		k++;
	}
	return ('\0');
}
