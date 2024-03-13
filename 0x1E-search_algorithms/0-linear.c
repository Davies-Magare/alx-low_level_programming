#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 * using linear search algorithm
 * @array: The array to search
 * @size: The size of the array
 * @value: The value to search for
 *
 * Return: On success, the index where the value is located
 * Otherwise return -1
 */
int linear_search(int *array, size_t size, int value)
{
	int i, new_siz;

	new_siz = (int) size;
	if (array == NULL)
		return (-1);

	for (i = 0; i < new_siz; i++)
	{
		printf("Value checked array[%i] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
