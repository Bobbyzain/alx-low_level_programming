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

	if (argc > 0)
	{
		for (count = 0; count < argc; count++)
			printf("%s\n", argv[count]);
	}
	return (0);
}
