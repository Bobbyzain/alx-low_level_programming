#include "main.h"
#include <stdio.h>

/**
 * cap_string - My special function
 * @s: collecting the strings to change to uppercase
 * Return: char output consisting of uppercase string
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (s[i - 1] == '}' || s[i - 1] == '{' || s[i - 1] == 32)
			{
				s[i] = s[i] - 32;
			}
			else if (s[i - 1] == '\n' || s[i - 1] == 9)
			{
				s[i] = s[i] - 32;
			}
			else if (s[i - 1] == ',' || s[i - 1] == ';')
			{
				s[i] = s[i] - 32;
			}
			else if (s[i - 1] == '.' || s[i - 1] == '!' || s[i - 1] == '?')
			{
				s[i] = s[i] - 32;
			}
			else if (s[i - 1] == '"' || s[i - 1] == '(' || s[i - 1] == ')')
			{
				s[i] = s[i] - 32;
			}
		}
		else
		{
			continue;
		}
	}
	return (s);
}
