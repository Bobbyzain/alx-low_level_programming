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
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar("\n");
	return (0);
}
