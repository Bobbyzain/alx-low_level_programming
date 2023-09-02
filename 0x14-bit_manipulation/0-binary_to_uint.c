#include "main.h"

/**
 * binary_to_uint - converting binary to integer
 * @b: binary to be converted
 * Return: unsigned integer
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0, j = 0, k;
	unsigned int dec;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	while (b[j] == '0')
		j++;
	k = i - j;
	dec = bin_to_dec(b, k, j);
	return (dec);
}
/**
 * bin_to_dec - the converting function
 * @bin: the binary
 * @size: relevant size
 * @vd: non_relevant size
 * Return: unsigned int
 */

unsigned int bin_to_dec(const char *bin, int size, int vd)
{
	int n = 16, adj, i, a[16], temp[16];
	unsigned int d = 0;
	int k = size, p = 0, q = 15;

	for (i = 0; i < n; i++)
		a[i] = 1 << i;
	while (p < q)
	{
		temp[p] = a[p];
		a[p] = a[q];
		a[q] = temp[p];
		p++;
		q--;
	}
	while (k > 0)
	{
		adj = n - k;
		if (bin[vd] == '1')
		{
			d += a[adj];
		}
		k--;
		vd++;
	}
	return (d);
}
