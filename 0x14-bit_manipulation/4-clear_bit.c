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
	unsigned int j = index, r = 63, i = 0;

	while (q > (k << i))
		i++;
	if (index > r)
		return (-1);
	if (i < j)
		return (1);
	if (q == 0)
		return (-1);
	if ((q >> j & 1) == 0)
		return (1);
	*n = (q ^ (k << j));
	return (1);
}
