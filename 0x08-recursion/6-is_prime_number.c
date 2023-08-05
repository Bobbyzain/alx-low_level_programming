#include "main.h"

/**
 * is_prime_number - My recursiive function name
 * @n: The number to check for prime number status
 * Return: Integer
 */
int is_prime_number(int n)
{
	int x, y = n, z = 2;

	if (y <= 1)
		return (0);
	x = prime(y, z);
	if (x == 1)
		return (1);
	return (0);
}
/**
 * prime - recursion implementation
 * @i: To find its squareroot
 * @j: control number
 * Return: Always int
 */
int prime(int i, int j)
{
	int k;

	k = i % j;
	if (k == 0 && i == j)
		return (1);
	else if (k == 0 && i > j)
		return (0);
	k = prime(i, j + 1);
	return (k);
}
