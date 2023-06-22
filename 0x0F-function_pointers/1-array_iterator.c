#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator - Entry point that takes function pointer as one of its inputs
 * @array: Pointer to an int type
 * @size: size of the array
 * @action: Pointer to function
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	void (*ptr)(int);
	int *n;
	unsigned int i, j;

	n = array;
	if (action == NULL)
		exit(1);
	ptr = action;
	i = 0;
	j = size;
	while (i < j)
	{
		ptr(n[i]);
		i++;
	}
}
