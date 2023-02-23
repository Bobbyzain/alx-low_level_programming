#include "main.h"

/**
 * print_most_numbers - Entry point
 *
 * Return: 0 Always (success)
 */

void print_most_numbers(void)
{
	int c = 0;

	while (c < 10)
	{
		if (c != 2 && c != 4)
			_putchar(c + 48);
		c++;
	}
	_putchar('\n');
}
