#include "main.h"

/**
 * rev_string - my special function
 * Description: to print out an entire string
 * @s: an char parameter that collects the local var containing string
 *
 */

void rev_string(char *s)
{
	int i;
	int j;
	int k;
	char *t = s;

	i = 0;
	while (t[i] != '\0')
	{
		i++;
	}
	k = i;
	j = 0;
	while (j < k  && i > 0)
	{
		s[j] = t[i];
		j++;
		i--;
	}
}
