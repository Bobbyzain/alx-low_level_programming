#include "main.h"
#include <stdio.h>

/**
 * _strcmp - my special function
 * Description: to copy elements in a string to a destination
 * @s1: a char pointer param to the 1st string for comparison
 * @s2: a char pointer param to the 2nd string for comparison
 * Return: The content of the destination file
 */

int _strcmp(char *s1, char *s2)
{
	int i, j, k, l, comp;

	for (i = 0; s1[i] != '\0';)
		i++;
	for (j = 0; s2[j] != '\0';)
		j++;
	if (i > j)
		k = j - 1;
	else
		k = i - 1;
	l = 0;
	for (; l < k; l++)
	{
		if (s1[l] != s2[l])
		{
			comp = s1[l] - s2[l];
			break;
		}
		else
		{
			comp = 0;
			continue;
		}
	}
	return (comp);
}
