#include "main.h"

/**
 * print_triangle - Entry point
 *
 * @size: my integer variable counting the amount of print times
 *
 * Return: 0 Always (success)
 */

void print_triangle(int size)
{
	int m;
	int o;
	int p = size;

	if (size <= 0)
		_putchar('\n');
	else
		while (size > 0)
		{
			m = 0;
			while (m < size - 1)
			{
				_putchar(' ');
				m++;
			}
			o = p - size;
			while (o >= 0)
			{
				_putchar('#');
				o--;
			}
			_putchar('\n');
			size--;
		}
}
