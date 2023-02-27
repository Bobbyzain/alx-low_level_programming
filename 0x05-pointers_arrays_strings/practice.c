#include "main.h"
#include <stdio.h>

/**
 * main - check the code 
 *
 * Return: Always 0.
 */
int main(void)
{
	char n[] = {10, 5, 17, 15, 100};
	char *p;
	int i;

	p = n;

	for (i = 0; i < 5; i++)
	{
		printf("%d\n", *(p + i));
	}
	return (0);
}
