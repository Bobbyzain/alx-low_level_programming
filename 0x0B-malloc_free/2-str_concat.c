#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * null_corrector - special function
 *
 * Return: Null if size is 0 else pointer to array
 */
char *null_corrector(void)
{
	char *v;

	v = malloc(sizeof(char) * 1);
	if (v ==  NULL)
		exit(1);
	v[0] = '\0';
	return (v);
	free(v);
}
/**
 * str_concat - special function
 * @s1: a pointer to xters in the array
 * @s2: a pointer to xters in the array
 *
 * Return: Null if size is 0 else pointer to array
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0;
	char *t, *u, *y;

	if (s1 == NULL)
		u = null_corrector();
	else
		u = s1;
	if (s2 == NULL)
		y = null_corrector();
	else
		y = s2;
	while (u[i] != '\0')
		i++;
	while (y[j] != '\0')
		j++;
	t = malloc(sizeof(char) * (i + j + 1));
	if (t == NULL)
		exit(1);
	for (i = 0; u[i] != '\0'; i++)
	{
		t[k] = u[i];
		k++;
	}
	for (j = 0; y[j] != '\0'; j++)
	{
		t[k] = y[j];
		k++;
	}
	return (t);
	free(t);
}
