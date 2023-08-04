#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of my function
 * @argc: Size of my argument array
 * @argv: Arguments
 * Return: Null
 */

int main(int argc, char *argv[])
{
	if (argc >= 1)
		printf("%s\n", argv[0]);
	return (0);
}
