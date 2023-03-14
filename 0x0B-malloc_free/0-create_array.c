#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it
 * with a specific char
 * @size: The size of the array.
 * @c: The character with which to initalize the array.
 *
 * Return: On Success, a pointer to the array in memory,
 * Otherwise, return NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *A;
	unsigned int i;

	A = NULL;
	if (size == 0)
		return (A);
	A = malloc(size * sizeof(*A));
	if (A == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		A[i] = c;
	return (A);
}
