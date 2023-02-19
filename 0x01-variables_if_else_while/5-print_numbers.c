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
	int x;

	for (x = 0; x < 10; x++)
	{
		printf("%d", x);
	}
	printf("\n");
	return (0);
}
