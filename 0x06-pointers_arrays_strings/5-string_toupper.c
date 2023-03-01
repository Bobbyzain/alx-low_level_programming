#include "main.h"
#include <stdio.h>

/**
 * string_toupper - My special function
 * @s: collecting the strings to change to uppercase
 * Return: char output consisting of uppercase string
 */

char *string_toupper(char *s)
{
	int i;
	char *t = s;

	for (i = 0; t[i] != '\0'; i++)
	{
		if (t[i] >= 'a' && t[i] <= 'z')
		{
			t[i] = t[i] - 32;
		}
		else
		{
			continue;
		}
	}
	return (t);
}
