#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: The array to search for the integer
 * @size: The size of the array
 * @cmp: A pointer to the function to search
 *
 * Return: On success, the index of the first
 * element for which cmp does not return 0
 * Otherwise, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}
	return (-1);
}