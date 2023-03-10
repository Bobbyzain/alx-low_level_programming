#include "main.h"

/**
 * _pow_recursion - my function
 * @x: an integer that is the base
 * @y: the integer that is the power
 * Description: To compute the factorial of a given number using recursion
 * Return: an integer that is the factorial
 */

int _pow_recursion(int x, int y)
{
	int pow;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	if (y >= 1)
	{
		pow = x * _pow_recursion(x, y - 1);
	}
	return (pow);
}
