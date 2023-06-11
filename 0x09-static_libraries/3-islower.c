#include "main.h"

/**
 * _islower - Entry point
 * @c: input to check for case level
 * Return: 0 Always (success)
 */

int _islower(int c)
{
	int result;

	if (c >= 'a' && c <= 'z')
		result = 1;
	else
		result = 0;
	return (result);
}
