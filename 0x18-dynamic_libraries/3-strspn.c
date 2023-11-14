#include "main.h"

/**
 * _strspn - My function to get the length of a prfix substring
 * @s: The string to parse through
 * @accept: The string whose xters we are to search for
 * Return: No. of bytes of the initial segment of s that matches criteria
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j = 0;
	int k;

	while (s[j] != ' ')
	{
		k = 0;
		while (accept[k] != '\0')
		{
			if (s[j] == accept[k])
			{
				i++;
				break;
			}
			else
				k++;
		}
		j++;
	}
	return (i);
}
