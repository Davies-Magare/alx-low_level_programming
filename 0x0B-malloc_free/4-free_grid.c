#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2d array
 * @grid: A 2d array
 * @height: The height of the 2d array
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int rows;

	for (rows = 0; rows < height; rows++)
		free(grid[rows]);
	free(grid);
}
