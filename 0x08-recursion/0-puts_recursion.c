#include "main.h"

/**
 * _puts_recursion - my function
 * @s: Pointer to the string I want to print
 * Description: To print out a string using recursion
 *
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
