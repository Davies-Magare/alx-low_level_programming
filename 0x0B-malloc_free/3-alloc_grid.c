#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates space for a 2d array of integers
 * @width: The width of the 2d array.
 * @height: The height of the 2d array.
 *
 * Return: On succcess, a pointer to the 2d array
 * Otherwise, a pointer to null is returned.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int rows, cols;

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (rows = 0; rows < height; rows++)
	{
		grid[rows] = malloc(cols * sizeof(int);
		if (grid[rows] == NULL)
			return (NULL);
	}
	for (rows = 0; rows < height; rows++)
	{
		for (cols = 0; cols < width; cols++)
		{
			grid[rows][cols] = 0;
		}
	}
	return (grid);
}
