#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: The array to search for the integer
 * @size: The size of the array
 * @cmp: A pointer to the function to search for the array.
 *
 * Return: The index of the first element for which cmp
 * function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, not_found, result;

	if (size <= 0)
		result = -1;
	not_found = 1;
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size && not_found; i++)
		{
			if (cmp(array[i]) != 0)
			{
				result = i;
				not_found = 0;
			}
		}

	}
	if (i == size)
		result = -1;
	return (result);
}
