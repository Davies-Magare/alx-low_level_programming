#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: A binary number string
 *
 * Return: The unsigned integer equivalent of the binary number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number;
	int i, power;

	if (b == NULL)
		return (0);
	power = strlen(b) - 1;
	number = 0;
	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] != 49 && b[i] != 48)
			return (0);
		if (b[i] == 49)
			number += power_n(2, power);
		i++;
		power--;
	}
	return (number);
}

/**
 * power_n - finds the result of number raised to power
 * @number: The number to be raised by the power
 * @power: The exponent
 *
 * Return: The result of number raised to power
 */
int power_n(int number, int power)
{
	int result;

	result = 1;
	while (power > 0)
	{
		result *= number;
		power--;
	}
	return (result);
}
