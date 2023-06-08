#include "main.h"

/**
 * _puts_recursion - To use recursion to print a string
 * @s: A Pointer to the string input
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}

