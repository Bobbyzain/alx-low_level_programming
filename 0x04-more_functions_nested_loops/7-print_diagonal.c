#include "main.h"

/**
 * print_diagonal - Entry point
 *
 * @n: my integer variable counting the amount of print times
 *
 * Return: 0 Always (success)
 */

void print_diagonal(int n)
{
	int m;
	int o = n;

	while (n > 0)
	{
		m = o - n;
		while (m > 0)
		{
			_putchar(' ');
			m--;
		}
		_putchar('\\');
		_putchar('\n');
		n--;
	}
	if (n <= 0)
		_putchar('\n');
}
