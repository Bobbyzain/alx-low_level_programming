#include "main.h"

/**
 * _puts_recursion - my function
 * @s: Pointer to the string I want to print
 * Description: To print out a string using recursion
 *
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	s++;
	_puts_recursion(s);
}
