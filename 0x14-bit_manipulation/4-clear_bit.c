#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: A pointer to an integer
 * @index: The index of the bit to be set
 *
 * Return: On success 1; Otherwise, return -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
