#include "main.h"

/**
 * _puts - my special function
 * Description: to print out an entire string
 * @str: an char parameter that collects the local var containing string
 *
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
