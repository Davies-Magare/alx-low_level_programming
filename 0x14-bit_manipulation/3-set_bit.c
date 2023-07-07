#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: An integer
 * @index: the index of the bit to set
 *
 * Return: On success 1, Otherwise, -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int temp;

	temp = *n;
	*n = *n | (1 << index);
	if (temp == *n)
		return (-1);
	return (1);
}
