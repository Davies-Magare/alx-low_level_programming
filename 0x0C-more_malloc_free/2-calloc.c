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
	void *A;
	int *a;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	A = NULL;
	A = malloc(nmemb * size * sizeof(int));
	if (A == NULL)
		return (NULL);
	a = (int *)A;
	for (i = 0; i < nmemb; i++)
		a[i] = 0;
	return (A);
}
