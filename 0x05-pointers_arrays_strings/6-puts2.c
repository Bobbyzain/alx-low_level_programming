#include "main.h"

/**
 * puts2 - my special function
 * Description: to print out an entire string
 * @str: an char parameter that collects the local var containing string
 *
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
