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
	int mag;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	mag = (nmemb * size) / sizeof(int);
	A = NULL;
	A = malloc(nmemb * size);
	a = (int *)a;
	if (a == NULL)
		return (NULL);
	for (i = 0; i < mag; i++)
		a[i] = 0;
	return (A);
}
