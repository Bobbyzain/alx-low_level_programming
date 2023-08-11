#include "main.h"

/**
 * null_corrector - special function
 *
 * Return: Null if size is 0 else pointer to array
 */

char *null_corrector(void)
{
	char *v;

	v = malloc(sizeof(char) * 1);
	if (v == NULL)
		exit(1);
	v[0] = '\0';
	return (v);
	free(v);
}
/**
 * string_nconcat - to concatenate 2 strings
 * @s1: 1st string
 * @s2: 2nd string
 * @n: size of s2 to concatenate
 * Return: Pointer to a new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s, *t, *u;
	unsigned int i = 0, j = 0, k = 0;

	if (s1 == NULL)
		t = null_corrector();
	else
		t = s1;
	if (s2 == NULL)
		u = null_corrector();
	else
		u = s2;
	while (t[i] != '\0')
		i++;
	while (u[j] != '\0')
		j++;
	if (n >= j)
		n = j;
	s = malloc(sizeof(char) * (i + n + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; t[i] != '\0'; i++)
	{
		s[k] = t[i];
		k++;
	}
	for (j = 0; j < n; j++)
	{
		s[k] = u[j];
		k++;
	}
	return (s);
	free(s);
}
