#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - Entry point that takes function pointer as one of its inputs
 * @name: Pointer to a string of characters
 * @f: A function pointer with no return value
 *
 * Return: none
 */

void print_name(char *name, void (*f)(char *))
{
	void (*ptr)(char *);


	ptr = f;
	ptr(name);
}
