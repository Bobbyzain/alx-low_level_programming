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

int main(int argc, __attribute__((unused)) char*argv[])
{
	int count = 1;
	int rs;
	int sum = 0;

	if (argc > 1)
	{
		while (count < argc)
		{
			rs = 0;
			while (argv[count][rs] != '\0')
			{
				if (argv[count][rs] < '0' || argv[count][rs] > '9')
				{
					printf("Error\n");
					return (0);
					break;
				}
				else
					rs++;
			}
			sum += atoi(argv[count]);
			count++;
		}
		printf("%d\n", sum);
	}
	else if (argc == 1)
		printf("%d\n", sum);
	return (0);
}
