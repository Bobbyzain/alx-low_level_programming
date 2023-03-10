#include "main.h"

/**
 * _sqrt_recursion - my function
 * @n: The number to find the square root of
 * @i: The iterator
 * Description: To compute the square root of a given number using recursion
 * Return: an integer that is the given number's square root
 */
int _sqrt(int n, int i);
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - my function
 * @n: The number whose square root I am looking for
 * @i: The number for iterating through numbers
 *
 * Return: The square root
 */

int _sqrt(int n, int i)
{
	int sr;

	sr = i * i;
	if (sr > n)
		return (-1);
	if (sr == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
