#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array of elements using malloc
 * @nmemb: The number of elements to allocate memory.
 * @size: The size in bytes of each element in memory
 *
 * Return: A pointer to the allocated memory
 * Otherwise, a null pointer is returned
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *spc;
	unsigned int n, i;
	int *call;

	n = (nmemb * size) / sizeof(int);
	if (nmemb <= 0 || size <= 0)
		return (NULL);
	spc = malloc(nmemb * size);
	if (spc == NULL)
		return (NULL);
	call = (int *) spc;
	for (i = 0; i < n; i++)
		call[i] = 0;
	return (spc);
}
