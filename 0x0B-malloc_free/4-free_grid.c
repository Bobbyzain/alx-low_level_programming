#include "main.h"

/**
 * free_grid - The function that frees memory allocated for grids
 * @grid: The grid i want to free
 * @height: guides the freeing process
 * Return: None
 */

void free_grid(int **grid, int height)
{
	int x = 0, y;

	while (x <= height)
	{
		y = 0;
		while (y <= x)
		{
			free(grid[y]);
			y++;
		}
		free(grid);
		x++;
	}
}
