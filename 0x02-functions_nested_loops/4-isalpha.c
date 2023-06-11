#include "main.h"

/**
 * _isalpha - Entry point
 *
 * @c: Function to determine if a character is an alphabet
 *
 * Return: 0 Always (success)
 */

int _isalpha(int c)
{
	int result;

	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		result = 1;
	else
		result = 0;
	return (result);
}
