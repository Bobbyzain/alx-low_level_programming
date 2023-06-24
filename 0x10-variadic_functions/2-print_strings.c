#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * print_strings - Entry point for the function
 * @n: first and the only named parameter in the function
 * @separator: string to be printed between numbers
 *
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *p;
	va_list args;

	va_start(args, n);
	if (n == 0)
		exit(1);
	if (separator == NULL)
	{
		for (i = 0; i < n - 1; ++i)
			printf("%s ", va_arg(args, char *));
	}
	else
	{
		for (i = 0; i < n - 1; ++i)
		{
			p = va_arg(args, char *);
			if (p == NULL)
			{
				p = "(nil)";
			}
			printf("%s%c ", p, *separator);
		}
	}
	printf("%s\n", va_arg(args, char *));
	va_end(args);
}