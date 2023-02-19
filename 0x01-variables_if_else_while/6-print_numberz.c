#include <stdio.h>

/**
 * main - Entry point
 *
 * function to print out the numbers from zero to ten
 *
 * Return: 0 Always (success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');
	return (0);
}
