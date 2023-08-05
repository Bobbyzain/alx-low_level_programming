#include "main.h"

/**
 * _sqrt_recursion - My recursiive function name
 * @n: The number to find the square root of 
 * Return: Integer
 */
int _sqrt_recursion(int n)
{
	int x, y = n, z = 1;

	if (y == 1)
		return (1);
	x = squareroot(y, z);
	if (x == y)
		return (-1);
	return (x);
}
/**
 * squareroot - recursion implementation
 * @i: To find its squareroot
 * @j: control number
 * Return: Always int
 */
int squareroot(int i, int j)
{
	if (j == i)
		return (j);
	if (j * j != i)
		squareroot(i, j + 1);
	else
		return (j);
	return (0);
}
