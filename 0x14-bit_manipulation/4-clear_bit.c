#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: A pointer to a number
 * @index: The index of the bit to be flipped
 *
 * Return: 1 if it worked; Otherwise, -1 is returned
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 32)
		return (-1);
	if (*n & 1 << index)
		*n = *n ^ (1 << index);
	return (1);
}
