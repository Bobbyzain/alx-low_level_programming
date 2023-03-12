#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * @argc: variable count
 * @argv: arguments
 *
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int count = 1;
	int coin[5] = {25, 10, 5, 2, 1};
	int rs = atoi(argv[count]);
	int change = 0;
	int i = 0;

	if (argc == 2)
	{
		while (i < 5)
		{
			if (rs >= coin[i])
			{
				if (rs % coin[i] > 0)
				{
					change += rs / coin[i];
					rs = rs % coin[i];
					i++;
				}
				else
				{
					change += rs / coin[i];
					break;
				}
			}
			else
				i++;
				
		}
	}
	else if (argc != 2)
		printf("Error\n");
	printf("%d\n", change);
	return (0);
}
