#include <stdio.h>

/**
 * main - Entry point
 *
 * function to print out the alphabet in lower case
 *
 * Return: 0 Always (success)
 */

int main(void)
{
	int x;
	int y;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	for (y = 'A'; y <= 'Z'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}

