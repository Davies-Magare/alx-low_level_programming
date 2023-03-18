#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: Number of elements of the array.
 * @size: The size of the array elements.
 *
 * Return: On success, a pointer to the allocated memory.
 * Otherwise, NULL is returned.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *A;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	A = NULL;
	A = malloc(nmemb * size);
	if (A == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		A[i] = 0;
	return ((void *)A);
}
