#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars an initializes it to
 * a specific char
 * @size: The size of the memory to be allocated
 * @c: The character to initialize the allocated memory with.
 *
 * Return: On success, a pointer to the allocated memory.
 * Othewise, the function returns a null pointer.
 */
char *create_array(unsigned int size, char c)
{
	char *charsp;
	int index;

	if (size == 0)
		return (NULL);
	charsp = malloc(sizeof(char) * size);
	if (charsp == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		charsp[index] = c;
	return (charsp);
}
