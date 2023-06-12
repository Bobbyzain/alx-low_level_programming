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
	int z;

	if (argc > 1)
	{
		for (; x < argc; x++)
		{
			z = atoi(argv[x]);
			if (z >= '0' && z <= '9')
				y += z;
			else
			{
				printf("Error\n");
				break;
			}
		}
		return (y);
	}
	else if (argc == 1)
		printf("%d\n", y);
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
