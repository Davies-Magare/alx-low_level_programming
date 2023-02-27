#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * followed by a new line
 * @a: An integer array.
 * @n: The number of elements of array a to be printed.
 *
 * Return: Nothing.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
