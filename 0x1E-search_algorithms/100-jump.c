#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of
 * integers using the jump search algorithm
 * @array: The array to search
 * @size: The size of the array
 * @value: The value to search
 *
 * Return: The index where value is located
 * Otherwise return -1
 */
int jump_search(int *array, size_t size, int value)
{
	int i;
	int block_value;

	if (array == NULL || array[0] > value)
		return (-1);
	block_value = (int) sqrt(size);
	i = 0;
	while (i < (int) size && array[i] < value)
	{
		printf("Value checked array[%i] = [%i]\n", i, array[i]);
		i += block_value;
	}
	printf("Value found between indexes [%i] and [%i]\n", i - block_value, i);
	if (i <= (int) size)
		return (search_block(array, i - block_value, i, value));
	return (search_block(array, i - block_value, (int) size - 1, value));
}

/**
 * search_block - search a given block for a value
 * @array: The array to search
 * @left: The start index of the block
 * @right: The end index of the block
 * @value: The value to search
 *
 * Return: The index of the value found
 */
int search_block(int *array, int left, int right, int value)
{
	int i;

	for (i = left; i <= right; i++)
	{
		printf("Value checked array[%i] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
