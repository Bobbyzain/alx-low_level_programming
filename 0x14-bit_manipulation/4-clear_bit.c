#include "main.h"

/**
 * clear_bit - funtion that sets the value of a bit to zero
 * @n: the number to change
 * @index: the location to change it from
 * Return: always int
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int q = *n, k = 1;
	unsigned int j = index, i = 63;

	/*while (q > (1 << i))*/
	/*	i++;*/
	if (q == 0)
		return (-1);
	if (index > i)
		return (-1);
	*n = (q ^ (k << j));
	return (1);
}
