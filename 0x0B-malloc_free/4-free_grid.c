#include "main.h"

/**
 * free_grid - frees 2D array
 *
 * @grid: grid to free
 * @height: height of grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
