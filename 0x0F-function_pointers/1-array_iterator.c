#include "function_pointers.h"

/**
 * array_iterator - executes a parameter function on array elements
 * @array: the array in question
 * @size: no of elements in array
 * @action: the function pointer
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action == NULL || array == NULL)
		exit(1);
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
