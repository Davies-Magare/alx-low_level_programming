#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: An integer
 * @index: The index of the bit
 *
 * Return: On success, the index of the bit
 * Otherwise, return -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;
	int array[20];

	i = 0;
	while (n > 0)
	{
		array[i] = n % 2;
		n /= 2;
		i++;
	}
	return (array[index]);
}
