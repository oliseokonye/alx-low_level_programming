#include <stdlib.h>
#include "main.h"

/**
 * free_grid - this function frees a 2D grid created by alloc_grid
 * @grid: the grid
 * @height: teh height
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
