#include "main.h"

/**
 * factorial - The recursive function
 * @n: The number to find the factorial of
 * Return: integer
 */

int factorial(int n)
{
	int i = 1;

	if (n < 0)
		return (-1);
	else if (n > 0)
	{
		i = n * factorial(n - 1);
	}
	return (i);
}
