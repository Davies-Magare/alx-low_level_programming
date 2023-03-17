#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @int b - Number of bytes to be allocated
 *
 * Return: On Success, a pointer to the allocated memory
 * Otherwise, the function terminates the process with a
 * status value of 98.
 */
void *malloc_checked(unsigned int b)
{
	void *A;

	A = NULL;

	A = malloc(b);
	if (A == NULL)
	{
		exit(98);
	}
	return (A);
}
