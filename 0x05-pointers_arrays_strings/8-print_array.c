#include "main.h"
#include <stdio.h>

/**
 * print_array - my special function
 * Description: to print out n elements in an array
 * @a: an int parameter that collects the local var containing the array
 * @n: an int parameter that collects the number of elements to be printed
 *
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d ", a[i]);
		i++;
	}
	putchar('\n');
}
