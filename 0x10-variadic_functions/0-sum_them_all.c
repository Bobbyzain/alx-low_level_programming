#include "variadic_functions.h"

/**
 * sum_them_all - find the sum of all parameters
 * @n: number of parameters supplied
 * Return: Always int
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int sum = 0, i;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
