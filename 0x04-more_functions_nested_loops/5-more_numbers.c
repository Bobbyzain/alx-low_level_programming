#include "main.h"

/**
 * more_numbers - Entry point
 *
 * Return: 0 Always (success)
 */

void more_numbers(void)
{
	int c;
	int u = 0;
	int num1;
	int num2;

	while (u < 10)
	{
		for (c = 0; c <= 14; c++)
		{
			num1 = c % 10;
			num2 = c / 10;
			if (num2 > 0)
				_putchar(num2 + 48);
			_putchar(num1 + 48);
		}
		_putchar('\n');
		u++;
	}
}
