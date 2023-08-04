#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point of my function
 * @argc: Size of my argument array
 * @argv: Arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count;
	int sum = 0;
	size_t i;
	char *num;

	if (argc <= 1)
		printf("%d\n", sum);
	else if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			num = argv[count];
			i = 0;
			while (i < strlen(num))
			{
				if (num[i] >= '0' && num[i] <= '9')
					i++;
				else
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[count]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
