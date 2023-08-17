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
	int fn;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];

	fn = get_op_func(op)(a, b);
	if (sizeof(fn) != sizeof(int))
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", fn);
	return (0);
}
