#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted
 * array of integers using binary search algorithm
 * @array: The array to search
 * @size: The size of the array
 * @value: The value to search in the array
 *
 * Return: The index where the value is located
 * If the value is not found return -1
 */
int binary_search(int *array, size_t size, int value)
{
	int left, right, middle;

	left = 0;
	right = (int) size - 1;

	while (left <= right)
	{
		middle = (int) ((left + right) / 2);
		print_search_section(array, left, right);
		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
		else
			return (middle);
	}
	return (-1);
}

/**
 * print_search_section - prints the section of the array
 * being searched
 * @array: The array to search
 * @left: The first index of the array
 * @right: The last index of the array
 *
 * Return: Nothing
 */
void print_search_section(int *array, int left, int right)
{
	int i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		if (i == right)
			printf("%i\n", array[i]);
		else
			printf("%i, ", array[i]);
	}
}
