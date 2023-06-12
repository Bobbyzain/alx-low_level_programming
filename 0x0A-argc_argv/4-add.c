#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point for my program
 * Descripton: Intro to the construction of command line arguments
 * @argc: the number of arguments passed to the main function
 * @argv: the argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int x = 1;
	int y = 0;

	if (argc > 1)
	{
		for (; x < argc; x++)
		{
			y += atoi(argv[x]);
		}
		printf("%d\n", y);
	}
	else if (argc == 1)
		printf("0\n");
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
