#include "main.h"

/**
 * _isdigit - Entry point
 *
 * @c: Function to determine if a character is a number
 *
 * Return: 0 Always (success)
 */

int _isdigit(int c)
{
	int result;

	if (c >= '0' && c <= '9')
		result = 1;
	else
		result = 0;
	return (result);
}
