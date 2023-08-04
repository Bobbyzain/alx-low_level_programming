#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - Entry point
 * @s: string to convert to integer
 * Return: Integer
 */
int _atoi(char *s)
{
	int i = 0;

	if (s[i] == '+' || s[i] == '-')
		i++;
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			s[i] += 0;
		}
		else
			i++;
		i++;
	}
	return (0);
}
