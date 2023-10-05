#include "main.h"
#include <stdlib.h>

/**
 * free_grid - This function frees a 2 dimensional grid.
 * @grid: This is a multidimensional array of integers.
 * @height: This is the height of the grid.
 *
 * Return: no return
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
