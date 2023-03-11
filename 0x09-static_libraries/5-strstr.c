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
	int l;
	char *r;

	k = 0, l = 0;
	if (needle[l] != '\0')
	{
		if (needle[l] != haystack[k] && haystack[k] != '\0')
			k++;
		else
		{	while (needle[l] == haystack[k] && haystack[k] != '\0')
			{
				r = &needle[l];
				return (r);
				l++;
				k++;
			}
		}
	}
	return ('\0');
}
