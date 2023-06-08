#include "main.h"

/**
 * factorial - To use recursion to find the factorial of a number
 * @n: number whose factorial I am to search for
 * Return: Always int.
 */

int factorial(int n)
{
	int i;

	if (n == 0)
	{
		return (1);
	}
	else if (n > 0)
	{
		i = n * factorial(n - 1);
	}
	else
		i = -1;
	return (i);
}

