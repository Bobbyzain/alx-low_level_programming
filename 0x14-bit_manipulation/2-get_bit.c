#include "main.h"

/**
 * get_bit - function to get value of a bit at specified index
 * @n: number whose binary value the code will track
 * @index: the index position of interest
 * Return: Always int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int j = index;
	unsigned long int q = n;

	if ((q >> j & 1) == 0 || (q >> j & 1) == 1)
		return (q >> j & 1);
	return (-1);
}
