#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Entry point that takes function pointer as one of its inputs
 * @name: Pointer to a string of characters
 * @f: A function pointer with no return value
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	void (*ptr)(char *);
	char *n;

	n = name;
	ptr = f;
	ptr(n);
}
