#include "main.h"

/**
 * print_binary - to print a number in binary
 * @n: the number to convert
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	int i, q = n;

	i = 0;
	if (q == 0)
		_putchar(q + '0');
	while (q >= (1 << i))
		i++;
	i--;
	for (; i >= 0; i--)
	{
		_putchar(((q >> i) & 1) + '0');
	}
}
