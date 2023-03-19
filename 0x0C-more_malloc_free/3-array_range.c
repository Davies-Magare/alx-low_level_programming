#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: The minimum value element.
 * @max: The maximum value element.
 *
 * Return: On success, a pointer to the newly created array,
 * Otherwise, NULL is returned.
 */
int *array_range(int min, int max)
{
	int *array;
	int i, size, pstv;

	pstv = max * -1;

	if (max < 0)
		size = (pstv + min + 1);
	else
		size = ((max - min) + 1);

	if (min > max)
		return (NULL);
	array = NULL;
	array = malloc(size * sizeof(int));
	if (array == NULL)
		return (NULL);
	for (i = 0; i <= max; i++)
		array[i] = min++;
	return (array);
}
