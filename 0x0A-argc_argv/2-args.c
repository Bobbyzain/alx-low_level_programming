#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: variable count
 * @argv: arguments
 *
 * Return: The name of the program
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
