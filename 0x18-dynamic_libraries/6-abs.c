#include "main.h"

/**
 * _abs - Entry point
 * @c: The number whose absolute value the function will find
 * Return: 0 Always (success)
 */

int _abs(int c)
{
	int result;

	if (c < 0)
		result = c * (-1);
	else
		result = c;
	return (result);
}
