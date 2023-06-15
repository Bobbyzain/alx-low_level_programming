#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point for my program
 * Descripton: Intro to the construction of command line arguments
 * @x: input to the change calculator
 * Return: Always 0
 */

int cents(int x);
int main(int argc, char *argv[])
{
	int min_num;

	if (argc != 2)
	{
		printf("Error\n");
		return (0);
	}
	if (atoi(argv[1]) < 0)
		printf("0\n");

	min_num = cents(atoi(argv[1]));
	printf("%d\n", min_num);
	return (0);
}
/**
 * cents - the change calculating recursive function
 * @x: input to be received from the relevant argv
 * Return: Always 0
 */
int cents(int x)
{
	int y = 0;
	int z, num;

	if (x >= 25)
	{
		y = x / 25;
		if (x % 25 != 0)
			z = x % 25;
		num = y + cents(z);
	}
	if (x < 25 && x >= 10)
	{
		y = x / 10;
		if (x % 10 != 0)
			z = x % 10;
		num = y + cents(z);
	}
	if (x < 10 && x >= 5)
	{
		y = x / 5;
		if (x % 5 != 0)
			z = x % 5;
		num = y + cents(z);
	}
	if (x < 5 && x >= 2)
	{
		y = x / 2;
		if (x % 2 != 0)
			z = x % 2;
		num = y + cents(z);
	}
	if (x == 1)
	{
		y = x / 1;
		num = y;
	}
	if (x <= 0)
	{
		y = 0;
		num = y;
	}
	return (num);
}
