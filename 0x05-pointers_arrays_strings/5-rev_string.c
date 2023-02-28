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
	char t;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	k = i - 1;
	j = 0;
	while (j < k)
	{
		t = s[j];
		s[j] = s[k];
		s[k] = t;
		j++;
		k--;
	}
}
