#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: The width of the array.
 * @height: The height of the array.
 *
 * Return: On Success, a pointer to a 2 dimensional array of integers
 * Otherwise, return NULL.
 */
int **alloc_grid(int width, int height)
{
	int **A;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	A = NULL;
	A = malloc(height * sizeof(int *));
	if (A == NULL)
	{
		for (j = 0; j < height; j++)
			free(A[i]);
		free(A);
	}
	for (i = 0; i < height; i++)
		A[i] = malloc(width * sizeof(int));
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			A[i][j] = 0;
		}
	}
	return (A);
}
