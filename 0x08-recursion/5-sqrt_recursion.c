#include "main.h"

/**
 * _sqrt_recursion - To use recursion to find the square root of a number
 * @n: number whose square I am to search for
 * Return: Always int.
 */

int _sqrt_recursion(int n)
{
	int i = 1;

	if (n == 0)
	{
		return (0);
	}
	else if (n > 0)
	{
		if (n ==  1)
			return (1);
		i = num_parser(i, n);
		if (i == n)
			return (-1);
	}
	else
		i = -1;
	return (i);
}
/**
 * num_parser - to parse through a series from 1
 * @i: number to be incremented till square-root is found
 * @n: number whose square root is searched for
 *
 * Return: Int
 */
int num_parser(int i, int n)
{
	if ((i * i) != n && i < n)
		i = num_parser(i + 1, n);
	return (i);
}
