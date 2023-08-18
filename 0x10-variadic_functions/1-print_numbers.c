#include "variadic_functions.h"

/**
 * print_numbers - to print numbers using variadic functions
 * @separator: to be printed between numbers
 * @n: number of integers passed
 * Return: None
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	if (n == 0)
	{
		printf("\n");
		exit(1);
	}
	if (separator == NULL)
	{
		for (i = 0; i < n - 1; i++)
			printf("%d", va_arg(ap, int));
	}
	else
	{
		for (i = 0; i < n - 1; i++)
			printf("%d%s", va_arg(ap, int), separator);
	}
	printf("%d\n", va_arg(ap, int));
	va_end(ap);
}
