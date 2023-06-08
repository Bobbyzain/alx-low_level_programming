#include "main.h"

/**
 * _strlen_recursion - To use recursion to print the reverse of a string
 * @s: A Pointer to the string input
 * Return: Always int.
 */

int _strlen_recursion(char *s)
{
	int n;

	if (*s)
	{
		n = _strlen_recursion(s + 1);
		n++;
	}
	else
		n = 0;
	return (n);
}

