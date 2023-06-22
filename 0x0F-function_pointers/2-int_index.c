#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * int_index - Entry point that takes function pointer
 * @array: Pointer to an int type
 * @size: size of the array
 * @cmp: Pointer to function
 *
 * Return: Always 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int (*ptr)(int);
	int *n;
	int i, j;

	n = array;
	if (cmp == NULL || array == NULL)
		return (-1);
	ptr = cmp;

	i = 0;
	if (size <= 0)
		return (-1);
	j = size;
	while (i < j)
	{
		ptr(n[i]);
		if (ptr(n[i]))
			return (i);
		i++;
	}
	return (1);
}
