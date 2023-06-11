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
	printf("%s\n", argv[argc - argc]);
	return (0);
}
