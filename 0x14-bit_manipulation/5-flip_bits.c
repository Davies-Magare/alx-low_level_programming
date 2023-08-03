#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from one
 * number to another
 * @n: The first number
 * @m: The second number
 *
 * Return: The number of bits to flip to convert m to n
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip;
	int i;

	flip = 0;
	for (i = 31; i >= 0; i++)
	{
		if ((n >> i & 1) != (m >> i & 1))
			flip++;
	}
	return (flip);
}
