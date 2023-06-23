#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - Entry point for the function
 * @n: first and the only named parameter in the function
 *
 * Return: Always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	va_start(args, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
