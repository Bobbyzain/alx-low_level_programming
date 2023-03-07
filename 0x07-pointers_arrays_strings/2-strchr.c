#include "main.h"

/**
 * _strchr - My string parsing function
 * @s: Pointer to the string I want to parse through
 * @c: The character whose occurence I am searching for
 * return: Pointer to the 1st occurence of c in s
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	char *r;

	for (;s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			r = &s[i];
			break;
		}
		else
		{
			continue;
		}
		r = "NULL";
	}
	return (r);
}
