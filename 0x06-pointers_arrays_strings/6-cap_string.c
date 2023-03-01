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
	char *t = s;

	for (i = 0; t[i] != '\0'; i++)
	{
		if (t[i] >= 'a' && t[i] <= 'z')
		{
			if (t[i - 1] == '}' || t[i - 1] == '{' || t[i - 1] == ' ')
			{
				t[i] = t[i] - 32;
			}
			else if (t[i - 1] == '\t' || t[i - 1] == '\n')
			{
				t[i] = t[i] - 32;
			}
			else if (t[i - 1] == ',' || t[i - 1] == ';')
			{
				t[i] = t[i] - 32;
			}
			else if (t[i - 1] == '.' || t[i - 1] == '!' || t[i - 1] == '?')
			{
				t[i] = t[i] - 32;
			}
			else if (t[i - 1] == '"' || t[i - 1] == '(' || t[i - 1] == ')')
			{
				t[i] = t[i] - 32;
			}
		}
		else
		{
			continue;
		}
	}
	return (t);
}
