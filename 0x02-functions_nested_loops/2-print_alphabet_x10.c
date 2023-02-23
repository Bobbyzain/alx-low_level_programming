#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: 0 Always (success)
 */

void print_alphabet_x10(void)
{
	int y = 0;
	int x;

	while (y < 10)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
		y++;
	}
}
