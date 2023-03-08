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

	while (*haystack)
	{
		k = 0;
		while (needle[k] != '\0')
		{
			if (*haystack == needle[k])
			{
				return (haystack);
				k++;
			}
			else
				break;
		}
		haystack++;
	}
	return ('\0');
}
