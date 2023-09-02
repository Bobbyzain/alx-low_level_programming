#include "main.h"

/**
 * set_bit - funtion that sets the value of a bit to one
 * @n: the number to change
 * @index: the location to change it from
 * Return: always int
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int q = *n;
	unsigned long int i, j = index;

	/*while (q > (1 << i))
		i++;
	if (i < j)
		return (-1);*/
	i = q | (1 << j);
	return (i);
}
