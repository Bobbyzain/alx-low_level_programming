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
	int prod = 1;

	if (argc == 3)
	{
		prod = atoi(argv[count]) * atoi(argv[count + 1]);
		printf("%d\n", prod);
	}
	else
		printf("Error\n");
	return (0);
}
