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
	void *ptr2;

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		else
			return (ptr);
	}
	if (new_size > old_size)
	{
		ptr2 = malloc(new_size);
		if (ptr2 == NULL)
			return (NULL);
		memcpy(ptr2, ptr, old_size);
		free(ptr);
	}
	else if (new_size == old_size)
		return (ptr);
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr2);
}
