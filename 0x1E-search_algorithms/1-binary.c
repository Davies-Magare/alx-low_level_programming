#include "search_algos.h"
/**
* binary_search - searches for a value in a sorted array
* @array: A pointer to the first integer of the array
* @size: The number of elements in the array
* @value: The value to search for
*
* Return: -1 if array is NULL or value is not present
* Otherwise return index where value is located
*/
int binary_search(int *array, size_t size, int value)
{
	int left, right, mid, i;

	left = 0;
	right = size - 1;
	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i == right)
				printf("%i", array[i]);
			else
				printf("%i, ", array[i]);
		}
		printf("\n");
		mid = (int)((left + right) / 2);
		if (array[mid] < value)
		{
			left = mid + 1;
		}
		else if (array[mid] > value)
		{
			right = mid - 1;
		}
		else
		{
			return (mid);
		}
	}
	return (-1);
}
