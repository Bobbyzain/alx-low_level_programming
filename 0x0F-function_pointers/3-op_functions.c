#include "3-calc.h"

/**
 * op_add - Addition
 * @a: first number
 * @b: second number
 * Return: Always int
 */

int op_add(int a, int b)
{
	int d;

	d = a + b;
	return (d);
}
/**
 * op_sub - Subtraction
 * @a: first number
 * @b: second number
 * Return: Always int
 */

int op_sub(int a, int b)
{
	int d;

	d = a - b;
	return (d);
}
/**
 * op_mul - Multiplication
 * @a: first number
 * @b: second number
 * Return: Always int
 */

int op_mul(int a, int b)
{
        int d;

        d = a * b;
        return (d);
}
/**
 * op_div - Division
 * @a: first number
 * @b: second number
 * Return: Always int
 */

int op_div(int a, int b)
{
        int d;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
        d = a / b;
        return (d);
}
/**
 * op_mod - Modulo
 * @a: first number
 * @b: second number
 * Return: Always int
 */

int op_mod(int a, int b)
{
        int d;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
        d = a % b;
        return (d);
}
