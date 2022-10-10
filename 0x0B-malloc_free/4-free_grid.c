#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a two dimensional array
 *
 * @grid: The grid to be cleared
 * @height: The height of the 2-dimensional array.
 */
void free_grid(int **grid, int height)
{
	int y;

	for (y = 0; y < height; y++)
		free(grid[y]);

	free(grid);
}
