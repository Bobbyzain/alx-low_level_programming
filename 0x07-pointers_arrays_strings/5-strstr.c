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
	while (*needle)
	{
		if (*needle == haystack[k])
		{
			return (needle);
			needle++;
			k++;
			if (*needle != haystack[k])
				break;
		}
		else
			k++;
	}
	return ('\0');
}
