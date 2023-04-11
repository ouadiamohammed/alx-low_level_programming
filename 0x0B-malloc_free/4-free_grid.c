#include <stdlib.h>

/**
 * free_grid - frees a 2D grid.
 *
 * @grid: the adress of the 2d grid.
 * @height: height of grid.
 *
 * Return: void.
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i];
		i++;
	}
	free(grid);
}
