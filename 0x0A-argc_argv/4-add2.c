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

int main(int argc, char __attribute__((unused)) *argv[])
{
        int i = 0;
        int sum = 0;
        int count;

	if (argc > 1)
	{
		while (i < argc)
		{
			count = 0;
			while (argv[i][count] != '\0')
			{
				if (argv[i][count] < '0' || argv[i][count] > '9')
				{
					printf("Error\n");
					return (0);
				}
				else
					count++;
			}
			sum += atoi(argv[i]);
			i++;
		}
		printf("%d\n", sum);
	}
	else if (argc == 1)
		printf("%d\n", sum);

        return (0);
}

