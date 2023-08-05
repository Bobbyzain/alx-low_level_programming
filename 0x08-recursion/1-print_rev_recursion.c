#include "main.h"

/**
 * _print_rev_recursion - The recursive function
 * @s: The string to put
 * Return: None
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
/*	else*/
		/*_putchar('\n');*/
}
