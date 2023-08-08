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
	char *s, *s3, *s4;

	if (s1 == NULL)
	{
		s3 = malloc(sizeof(char) * 1);
		if (s3 == NULL)
			exit(1);
		s3[0] = '\0';
	}
	else
		s3 = s1;
	if (s2 == NULL)
	{
		s4 = malloc(sizeof(char) * 1);
		if (s4 == NULL)
			exit(1);
		s4[0] = '\0';
	}
	else
		s4 = s2;
	for (; s3[i] != '\0'; i++)
	for (; s4[j] != '\0'; j++)
	k = i + j + 1;
	s = malloc(k * sizeof(char));
	if (s == NULL)
		exit(1);
	for (; s3[l] != '\0'; l++)
	{
		s[l] = s3[l];
	}
	for (j = 0; s4[j] != '\0'; j++)
	{
		s[l] = s4[j];
		l++;
	}
	return (s);
	free(s);
	free(s3);
	free(s4);
}
