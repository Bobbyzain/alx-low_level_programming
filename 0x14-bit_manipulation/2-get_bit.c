#include "main.h"

/**
 * get_bit - function to get value of a bit at specified index
 * @n: number whose binary value the code will track
 * @index: the index position of interest
 * Return: Always int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i, q = n, j = index;

	while (q > (1 << i))
		i++;
	if (i < j)
		return (-1);
	return (q >> j & 1);
}
