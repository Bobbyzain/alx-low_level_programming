#include <stdio.h>

/**
 * main - Entry point
 *
 * function to print out the alphabet in lowercase and reverse
 *
 * Return: 0 Always (success)
 */

int main(void)
{
	char x;

	for (x = 'z'; x <= 'a'; --x)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
