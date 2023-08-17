#include "3-calc.h"

/**
 * main - Entry point into the function
 * @argc: number of arguments
 * @argv: the arguments
 * Return: Always int
 */

int main(int argc, char *argv[])
{
	int a, b;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];

	if (get_op_func(op)(a, b) == NULL)
		exit(99);

	return (get_op_func(op)(a, b));
}
