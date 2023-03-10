#include "main.h"

/**
 * _strlen_recursion - my function
 * @s: Pointer to the string I want to print
 * Description: To find out the length of a string using recursion
 * Return: the length of all the characters withing the string s
 */

int _strlen_recursion(char *s)
{
	int n;

	if (*s != '\0')
	{
		n = _strlen_recursion(s + 1);
		n++;
	}
	else
		n = 0;
	return (n);
}
