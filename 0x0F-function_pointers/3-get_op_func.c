#include "3-calc.h"

/**
 * get_op_func - function pointer to determine the right operation
 * @s: pointer to the string operator guiding the function
 * Return: Always int
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while ((ops[i]).op != NULL)
	{
		if (*(ops[i]).op == *s)
			return (*(ops[i]).f);
		i++;
	}
	printf("Error\n");
	exit(99);
	return (NULL);
}
