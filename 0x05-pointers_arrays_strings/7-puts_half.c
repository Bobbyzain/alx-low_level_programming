#include "main.h"

/**
 * puts_half - my special function
 * Description: print out a string
 * @str: an char parameter that collects the local var containing string
 *
 */

void puts_half(char *str)
{
	int i, j, k, l;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	k = i - 1;
	l = k / 2;
	if (k % 2 == 0)
	{
		l = k / 2;
	}
	else if (k % 2 != 0)
	{
		l = k / 2 + 1;
	}
	for (j = l; j < k; j++)
		_putchar(str[j]);
	_putchar('\n');
}
