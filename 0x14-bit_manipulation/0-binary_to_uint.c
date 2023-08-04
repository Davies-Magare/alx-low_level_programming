#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: A string of 0 and 1 chars
 *
 * Return: On success the decimal equivalent of the binary string
 * Otherwise, 0 is returned
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, dec, len, number;

	if (b == NULL)
		return (0);
	len = strlen(b) - 1;
	dec = 0;
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		number = (b[i] - 48) << len--;
		dec += number;
	}
	return (dec);
}
