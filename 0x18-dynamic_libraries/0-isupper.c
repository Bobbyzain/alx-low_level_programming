#include "main.h"

/**
 * _isupper - Entry point
 *
 * @c: Function to determine if a character is an uppercase
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
