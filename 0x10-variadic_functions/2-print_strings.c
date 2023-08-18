#include "variadic_functions.h"

/**
 * print_strings - variadic function that prints strings and separators
 * @separator: to be printed between strings
 * @n: number of argument parameters to be provided
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *p;

	va_start(ap, n);
	if (n == 0)
	{
		printf("\n");
		exit(1);
	}
	else
	{
		if (separator == NULL)
		{
			for (i = 0; i < n - 1; i++)
			{
				p = va_arg(ap, char *);
				if (p == NULL)
					p = "(nil)";
				printf("%s", p);
			}
		}
		else
		{
			for (i = 0; i < n - 1; i++)
			{
				p = va_arg(ap, char *);
				if (p == NULL)
					p = "(nil)";
				printf("%s%s", p, separator);
			}
		}
		p = va_arg(ap, char *);
		if (p == NULL)
			p = "(nil)";
		printf("%s\n", p);

	}
	va_end(ap);
}
