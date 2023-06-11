#include <stdio.h>
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
	int count = 0;

	while (argc > 1)
	{
		printf("%s\n", argv[count]);
		argc--;
		count++;
	}
	printf("%s\n", argv[count]);
	return (0);
}
