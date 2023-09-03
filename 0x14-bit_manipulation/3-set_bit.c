#include "main.h"

/**
 * set_bit - funtion that sets the value of a bit to one
 * @n: the number to change
 * @index: the location to change it from
 * Return: always int
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int q = *n, k = 1;
	unsigned int j = index, i = 63;

	/*while (q > (1 << i))*/
	/*	i++;*/
	if (index > i)
		return (-1);
	*n = ((k << j) | q);
	return (1);
}
