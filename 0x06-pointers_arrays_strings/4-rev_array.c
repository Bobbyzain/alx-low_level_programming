#include "main.h"
#include <stdio.h>

/**
 * reverse_array - my special function
 * @a: pointer to the array to be reversed
 * @n: number of elements in the array
 *
 */

void reverse_array(int *a, int n)
{
	int i, j, k;

	i = n - 1;
	j = 0;
	while (j < i)
	{
		k = a[j];
		a[j] = a[i];
		a[i] = k;
		i--;
		j++;
	}
}
