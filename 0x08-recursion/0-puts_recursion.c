#include "main.h"

/**
 * _puts_recursion - The recursive function
 * @s: The string to put
 * Return: None
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
	_putchar(*s);
	s++;
	_puts_recursion(s);
	}
	_putchar('\n');
}
