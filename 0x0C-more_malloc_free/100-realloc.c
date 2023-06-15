#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: A pointer to the old memory block
 * @old_size: The size of the old memory block
 * @new_size: Size of the new memory block
 *
 * Return: On success, a pointer to the new block of memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr;

	if (new_size > old_size)
	{
		newptr = malloc(new_size + old_size);
		newptr = memcpy(newptr, ptr, old_size);
		free(ptr);
		return (newptr);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (NULL);
}
