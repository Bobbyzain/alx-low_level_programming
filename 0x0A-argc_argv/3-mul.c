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
	char *x = argv[argc - 2];
	char *y = argv[argc - 1];

	if (argc == 3)
		printf("%d\n", atoi(x) * atoi(y));
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
