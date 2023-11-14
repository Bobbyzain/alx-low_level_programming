#include "main.h"

/**
 * _islower - Entry point
 *
 * Return: 0 Always (success)
 */

int _islower(int c)
{
	int result;

	if (c >= 97 && c <= 125)
		result = 1;
	else
		result = 0;
	return (result);
}
