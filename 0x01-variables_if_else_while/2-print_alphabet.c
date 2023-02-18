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
	for (int x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
