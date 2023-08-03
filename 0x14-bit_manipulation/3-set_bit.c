#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: A pointer to a number
 * @index: The index to set to 1
 *
 * Return: On success 1; Otherwise 0 is returned
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 32)
		return (-1);
	*n = *n | 1 << index;
	return (1);
}
