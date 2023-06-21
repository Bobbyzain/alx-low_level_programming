#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Special function
 * @width: no of horizontal integer fields
 * @height: no of vertical integer fields
 *
 * Return: Null if parameters are <= 0 else pointer
 */

int **alloc_grid(int width, int height)
{
	int a = 0, b = 0;
	int **t;

	if (width <= 0 || height <= 0)
		return (NULL);
	t = (int **)malloc(sizeof(int *) * height);
	if (t == NULL)
		exit(1);
	while (a < height)
	{
		t[a] = (int *)malloc(sizeof(int) * width);
		if (t[a] == NULL)
		{
			for (b = 0; b < a; b++)
			{
				free(t[b]);
			}
			free(t);
			exit(1);
		}
		a++;
	}
	a = 0;
	while (a < height)
	{
		b = 0;
		while (b < width)
		{
			t[a][b] = 0;
			b++;
		}
		a++;
	}

	return (t);
	free(t);
}
