#include "main.h"

/**
 * get_bit - function to get value of a bit at specified index
 * @n: number whose binary value the code will track
 * @index: the index position of interest
 * Return: Always int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int j = index, i = 0, b = 1;
	unsigned long int q = n;

	while (q >= (b << i))
		i++;
	if (j > i)
		return (-1);
	if ((q >> j & 1) == 0 || (q >> j & 1) == 1)
		return (q >> j & 1);
	return (-1);
}
