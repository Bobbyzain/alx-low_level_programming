#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: 0 Always (success)
 */

void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
