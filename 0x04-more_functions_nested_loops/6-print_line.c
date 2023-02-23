#include "main.h"

/**
 * print_line - Entry point
 *
 * @n: my integer variable counting the amount of print times
 * Return: 0 Always (success)
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('-');
		n--;
	}
	_putchar('\n');
}
