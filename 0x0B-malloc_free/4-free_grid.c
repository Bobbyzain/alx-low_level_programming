#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Special function
 * @grid: no of horizontal integer fields
 * @height: no of vertical integer fields
 *
 * Return: Null if parameters are <= 0 else pointer
 */

void free_grid(int **grid, int height)
{
	int a = 0;

	while (a < height)
	{
		free(grid[a]);
		a++;
	}
	free(grid);
}