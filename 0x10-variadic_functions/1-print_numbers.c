#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - Entry point for the function
 * @n: first and the only named parameter in the function
 * @separator: string to be printed between numbers
 *
 * Return: Nothing
 */

void print_numnbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	if (n == 0 || separator == NULL)
		exit(1);
	for (i = 0; i < n; i = va_arg(args, int))
	{
		printf("%dseparator", i);
	}
	va_end(args);
}
