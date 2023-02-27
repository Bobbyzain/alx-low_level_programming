#include "main.h"

/**
 * swap_int - my special function
 * Description: Swapping the values of two local variables in the main
 * @a: the first parameter to be swapped with the second
 * @b: the second parameter to be swapped with the first
 *
 */

void swap_int(int *a, int *b)
{
	a = b;
	b = a;
}
