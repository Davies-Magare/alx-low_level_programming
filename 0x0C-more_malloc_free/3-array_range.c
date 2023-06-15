#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: The minimum integer value
 * @max: The maximum integer value
 *
 * Return: On success, a pointer to the newly created array
 * Otherwise, a null pointer is returned
 */
int *array_range(int min, int max)
{
	int *array;
	int members;
	int i;

	if (min > max)
		return (NULL);
	members = (max - min) + 1;
	array = malloc(members * sizeof(int));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < members; i++)
		array[i] = min++;
	return (array);
}
