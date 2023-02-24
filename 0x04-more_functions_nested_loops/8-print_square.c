#include "main.h"

/**
 * print_square - Entry point
 *
 * @size: my integer variable counting the amount of print times
 * Return: 0 Always (success)
 */

void print_square(int size)
{
	int o = size;
	int p = size;

	while (o > 0)
	{
		while (size > 0)
		{
			_putchar('#');
			size--;
		}
		size = p;
		_putchar('\n');
		o--;
	}
	if (size <= 0)
		_putchar('\n');
}
