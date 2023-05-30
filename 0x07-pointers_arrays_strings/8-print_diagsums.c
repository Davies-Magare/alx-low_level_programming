#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * matrix of integers
 * @a: A pointer to the matrix of integers.
 * @size: The size of the matrix.
 *
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int rows, cols, diag, sum, sum1;

	diag = 0;
	sum = 0;
	for (rows = 0; rows < size; rows++)
	{
		for (cols = 0; cols < size; cols++)
		{
			if (cols == diag)
				sum += a[rows * size + diag];
		}
		diag += 1;
	}
	diag = size - 1;
	sum1 = 0;

	for (rows = 0; rows < size; rows++)
	{
		for (cols = 0; cols < size; cols++)
		{
			if (cols == diag)
				sum1 += a[rows * size + diag];
		}
		diag -= 1;
	}
	printf("%i, %i\n", sum, sum1);
}
