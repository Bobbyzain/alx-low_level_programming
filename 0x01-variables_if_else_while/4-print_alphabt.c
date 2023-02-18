
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

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'e' && x != 'q')
			putchar(x);
	}
	putchar('\n');
	return (0);
}
