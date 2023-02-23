#include "main.h"

/**
 * _isupper - Entry point
 *
 * Return: 0 Always (success)
 */

int _isupper(int c)
{
	int result;

	if (c >= 'A' && c <= 'Z')
		result = 1;
	else if (c >= 'a' && c <= 'z')
		result = 0;
	return (result);
}
