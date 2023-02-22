#include <stdio.h>

/**
 * main - Entry point
 * putcharPrinter - nested function
 * Return: 0 Always (success)
 */

int main(void)
{
	/**
	 * putcharPrinter - to print the putchar output
	 *
	 * Return: 0 Always (success)
	 */
	int putcharPrinter(void)
	{
		putchar('_');
		putchar('p');
		putchar('u');
		putchar('t');
		putchar('c');
		putchar('h');
		putchar('a');
		putchar('r');
		putchar('\n');
		return (0);
	}
	putcharPrinter();
	return (0);
}
