#include "main.h"

/**
 * is_prime_number - my function
 * @n: Integer to comfirm if prime number
 * @i: iterator
 * Description: To determine the prime number status
 * Return: 1 or 0 if prime number or not, respectively
 */

int _prime(int n, int i);
int is_prime_number(int n)
{
	return (_prime(n, 2));
}

/**
 * _prime - To find out if a number is a prime no.
 * @n: the number i want to confirm
 * @i: the iterator
 *
 * Return: 0 or 1 Depending on prime status of the given no.
 */

int _prime(int n, int i)
{
	int s;

	if (n <= 1)
	{
		s = 0;
		return (s);
	}
	else if (n % i == 0)
	{
		s = 0;
		return (s);
	}
	if ((i < n) && (n % i != 0))
		s = _prime(n, i + 1);
	return (1);
}
