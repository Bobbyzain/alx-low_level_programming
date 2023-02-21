#include <stdio.h>

/**
 * main - Entry point
 *
 * function to print out the numbers of base 16 in lower case
 *
 * Return: 0 Always (success)
 */

int main(void)
{
	int x;
	int y;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	for (y = 'a'; y <= 'f'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}

