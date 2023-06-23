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

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	if (n == 0 || separator == NULL)
		exit(1);
	for (i = 0; i < n - 1; i++)
	{
		printf("%d%c", va_arg(args, int), *separator);
	}
	printf("%d\n", va_arg(args, int));
	va_end(args);
}
