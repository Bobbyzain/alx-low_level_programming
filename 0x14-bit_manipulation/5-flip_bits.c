#include "main.h"

/**
 * flip_bits - function to count no of bits that needs flipping
 * @n: 1st number
 * @m: 2nd number
 * Return: unsigned int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int j = 0, count = 0;

	while (j < 63)
	{
		if ((n >> j & 1) != (m >> j & 1))
		{
			count++;
		}
		j++;
	}
	return (count);
}
