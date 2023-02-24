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
	int num1;
	int num2;
	int num3;
	int num4;
	char *m;
	char *n;

	for (c = 1; c <= 100; c++)
	{
		num1 = c % 10;
		num2 = c / 10;
		num3 = num2 % 10;
		num4 = num2 / 10;
		if (num4 > 0)
			putchar(num4 + 48);
		if (num3 > 0)
			putchar(num3 + 48);
		else if (num4 > 0)
			putchar(num3 + 48);
		putchar(num1 + 48);
		putchar(' ');
	}
	putchar('\n');
	m = "Fizz";
	n = "Buzz";
	for (c = 1; c <= 100; c++)
	{
		if (c % 3 == 0)
			printf("%s ", m);
		else
			printf("%d ", c);
		if (c % 5 == 0)
			printf("%s ", n);
		else
			printf("%d ", c);
	}
	putchar('\n');
	return (0);
}
