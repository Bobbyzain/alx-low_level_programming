#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * @argc: variable count
 * @argv: arguments
 * Return: 0
 */
int main(int argc,  char *argv[])
{
	int count = 1, i = 0, change = 0, rs;
	int coin[5] = {25, 10, 5, 2, 1};

	rs = atoi(argv[count]);
	if (rs <= 0)
		printf("%d\n", change);
	else
	{
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
			printf("%d\n", change);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	return (0);
}
