#include "main.h"

/**
 * _print_rev_recursion - To use recursion to print the reverse of a string
 * @s: A Pointer to the string input
 * Return: Always 0.
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

