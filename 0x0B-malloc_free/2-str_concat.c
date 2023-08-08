#include "main.h"

/**
 * str_concat - Function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: Always pointer
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k, l = 0;
	char *s;

	if (s1 == NULL || s2 == NULL)
	{
		s = malloc(sizeof(char) * 1);
		if (s == NULL)
			return (NULL);
		s[0] = '\0';
		return (s);
		free(s);
	}
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	k = i + j + 1;
	s = malloc(k * sizeof(char));
	if (s == NULL)
		return (NULL);
	while (l < i)
	{
		s[l] = s1[l];
		l++;
	}
	j = 0;
	while (l < k)
	{
		s[l] = s2[j];
		l++;
		j++;
	}
	s[k -  1] = '\0';
	return (s);
	free(s);
}
