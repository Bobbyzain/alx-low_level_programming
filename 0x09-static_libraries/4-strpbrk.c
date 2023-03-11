#include "main.h"

/**
 * _strpbrk - My function to search for any of a set of bytes
 * @s: The string to parse through
 * @accept: The string whose xters we are to search for
 * Return: No. of bytes of the initial segment of s that matches criteria
 */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s != '\0')
	{
		k = 0;
		while (accept[k] != '\0')
		{
			if (*s == accept[k])
			{
				return (s);
			}
			k++;
		}
		s++;
	}
	return ('\0');
}
