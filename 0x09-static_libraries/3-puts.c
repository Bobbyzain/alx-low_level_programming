#include "main.h"

/**
 * _puts - my special function
 * Description: to print out an entire string
 * @s: an char parameter that collects the local var containing string
 *
 */

void _puts(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
