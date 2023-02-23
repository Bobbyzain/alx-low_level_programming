#include "main.h"

/**
 * print_numbers - Entry point
 *
 * Return: 0 Always (success)
 */

void print_numbers(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		_putchar(c + 48);
	}
	_putchar('\n');
}
