#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function given as a parameter
 * on each element of the array
 * @action: A pointer to the function to act on the array
 * elements
 * @array: An array of elements
 * @size: size of the array
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && size > 0 && action != NULL)

		for (i = 0; i < size; i++)
			action(array[i]);
}
