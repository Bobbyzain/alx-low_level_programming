#include "main.h"

/**
 * _pow_recursion - To use recursion to find the power of a number
 * @x: base value number to be raised to another
 * @y: power number to raise the base value by
 * Return: Always int.
 */

int _pow_recursion(int x, int y)
{
	int i;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	i = x * _pow_recursion(x, y - 1);
	return (i);
}

