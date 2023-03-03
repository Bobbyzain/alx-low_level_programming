#include "main.h"
#include <stdio.h>

/**
 * rot13 - My special function
 * @s: collecting the strings to encode
 * Return: char output consisting of encoded string
 */

char *rot13(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if ((s[i] >= 'A' && s[i] <= 'A' + 12) || (s[i] >= 'a' && s[i] <= 'a' + 12))
			s[i] = s[i] + 13;
		else if ((s[i] >= 'A' + 12 && s[i] <= 'Z') || (s[i] >= 'a' + 12 && s[i] <= 'z'))
			s[i] = s[i] - 13;
		i++;
	}
	return (s);
}
