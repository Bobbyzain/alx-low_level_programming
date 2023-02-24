#include <stdio.h>
#include "main.h"

/**
 * fizz_buzz - the function proper
 * Description: To print fizz_buzz following pre-defined rule
 * Return: 0 Always (success)
 */

int fizz_buzz(void);

/**
 * main - Entry point
 * Description: Entry point for the main fizzbuzz function
 * Return: 0 Always (success)
 */

int main(void)
{
	fizz_buzz();
	return (0);
}

/**
 * fizz_buzz - function proper
 * Description: As written above
 * Return: 0 Always
 */

int fizz_buzz(void)
{
	int c;
	char *m;
	char *n;

	m = "Fizz";
	n = "Buzz";
	for (c = 1; c <= 100; c++)
	{
		if (c % 3 == 0)
			printf("%s ", m);
		else if (c % 5 == 0)
			printf("%s ", n);
		else
			printf("%d ", c);
	}
	putchar('\n');
	return (0);
}
