#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: A number
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	int i;

	if (n == 0)
		_putchar('0');
	else
	{
		for (i = 31; i >= 0; i--)
		{
			if (!(n & (1 << i)))
				continue;
			else
				break;
		}
		for (; i >= 0; i--)
		{
			if (n & (1 << i))
				_putchar('1');
			else
				_putchar('0');
		}
	}
}
