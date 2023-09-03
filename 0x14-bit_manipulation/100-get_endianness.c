#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: Always int
 */

int get_endianness(void)
{
	int i = 1;
	char *start;

	start = (char *)&i;
	if (*start)
		return (1);
	getchar();
	return (0);
}
