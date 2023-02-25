#include "main.h"

/**
 * print_number - function proper
 * Description: As written above
 * Return: 0 Always
 */

void print_number(int n)
{
	int num1;
	int num2;
	int num3;
	int num4;
	int num1a;
	int num2a;
	int num3a;
	int p;

	if (n < 0)
	{
		p = n * -1;
	}
	else
		p = n;
	num1 = p % 10;
	num1a = p / 10;
	num2 = num1a % 10;
	num2a = num1a / 10;
	num3 = num2a % 10;
	num3a = num2a / 10;
	num4 = num3a % 10;
	if (n > 0)
	{
		if (num4 > 0)
		{
			_putchar(num4 + 48);
			_putchar(num3 + 48);
			_putchar(num2 + 48);
		}
		else if (num3 > 0)
		{
			_putchar(num3 + 48);
			_putchar(num2 + 48);
		}
		else if (num2 > 0)
		{
			_putchar(num2 + 48);
		}
		_putchar(num1 + 48);
        	_putchar('\n');
	}
	else if (n < 0)
	{
		if (num4 > 0)
		{
			_putchar('-');
			_putchar(num4 + 48);
			_putchar(num3 + 48);
			_putchar(num2 + 48);
		}
		else if (num3 > 0)
		{
			_putchar('-');
			_putchar(num3 + 48);
			_putchar(num2 + 48);
		}
		else if (num2 > 0)
		{
			_putchar('-');
			_putchar(num2 + 48);
		}
		_putchar(num1 + 48);
		_putchar('\n');
	}
}
