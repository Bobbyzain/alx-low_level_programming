#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * @argc: variable count
 * @argv: arguments
 *
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int count = 1;
	int sum = 0;

	if (argc > 1)
	{
		while (count < argc)
		{
			if (*argv[count] < '0' || *argv[count] > '9')
			{
				printf("Error\n");
				return (0);
			}

			else
			{
				sum += atoi(argv[count]);
				count++;
			}
		}
		printf("%d\n", sum);
	}
	else if (argc == 1)
		printf("%d\n", sum);
	return (0);
}
