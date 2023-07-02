#include "main.h"

/**
 * is_prime_number - To use recursion to find the prime status of a number
 * @n: number whose prime status is searched for
 *
 * Return: Always int.
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
	{
		return (0);
	}
	else
	{
		i = num_parser(i, n);
		if (i == n)
			return (1);
	}
	return (0);
}
/**
 * num_parser - to parse through a series from 1
 * @i: number to be incremented
 * @n: number whose square root is searched for
 *
 * Return: Int
 */
int num_parser(int i, int n)
{
	if (n % i != 0 && i < n)
		i = num_parser(i + 1, n);
	return (i);
}
