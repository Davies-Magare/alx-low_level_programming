#include "main.h"

/**
 * reverse_array - reverses the contents of an array of integers
 * @a: An integer array.
 * @n: The number of elements of the array.
 *
 * Return: Nothing.
 */
void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
