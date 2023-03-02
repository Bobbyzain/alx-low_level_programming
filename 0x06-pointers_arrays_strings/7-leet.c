#include "main.h"
#include <stdio.h>

/**
 * leet - My special function
 * @s: collecting the strings to change to uppercase
 * Return: char output consisting of uppercase string
 */

char *leet(char *s)
{
	int i, j;
	char x[] = {'a', 'e', 'o', 't', 'l'};
	int y[] = {'4', '3', '0', '7', '1'};
	int len = 5;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (j < len)
		{
			if (s[i] == x[j] || s[i] == x[j] - 32)
				s[i] = y[j];
			j++;
		}
		i++;
	}
	return (s);
}
