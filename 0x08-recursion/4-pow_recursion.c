#include "main.h"

/**
 * _pow_recursion - The recursive function
 * @x: Base
 * @y: power
 * Return: Integer
 */
int _pow_recursion(int x, int y)
{
	int i = 1;

	if (y < 0)
		return (-1);
	else if (i > 0)
	{
		i = power(x, y);
	}
	return (i);
}
/**
 * power - The recursive function
 * @m: Base
 * @n: power
 * Return: Integer
 */
int power(int m, int n)
{
	int mult;

	if (n > 0)
	{
		mult = m * power(m, n - 1);
	}
	else
		mult = 1;
	return (mult);
}
