#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of my function
 * @argc: Size of my argument array
 * @argv: Arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		count = atoi(argv[1]) * atoi(argv[2]);
			printf("%d\n", count);
	}
	return (0);
}
