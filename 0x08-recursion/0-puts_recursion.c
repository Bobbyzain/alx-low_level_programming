#include "main.h"

/**
 * _puts_recursion - The recursive function
 * @s: The string to put
 * Return: None
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
