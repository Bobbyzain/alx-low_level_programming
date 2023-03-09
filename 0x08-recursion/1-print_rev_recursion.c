#include "main.h"

/**
 * _print_rev_recursion - my function
 * @s: Pointer to the string I want to print
 * Description: To print out a string using recursion
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	return;
}
