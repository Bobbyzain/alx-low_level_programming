#include "main.h"

/**
 * factorial - my function
 * @n: an integer I want to find the factorial of
 * Description: To compute the factorial of a given number using recursion
 * Return: an integer that is the factorial
 */

int factorial(int n)
{
	int fac;

	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);
	if (n > 1)
	{
		fac = n * factorial(n - 1);
	}
	return (fac);
}
