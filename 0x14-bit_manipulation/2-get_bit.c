#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: A number
 * @index: The index starting from 0 of the bit you want to get
 *
 * Return: On success, The value of the bit at index
 * Otherwise -1 is returned
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 32)
		return (-1);
	if (n & 1 << index)
		return (1);
	else
		return (0);
}
