#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: The integer starting point.
 *
 * Return: Nothing.
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (n < 98)
				printf("%i, ", n++);
			else
				printf("%i", 98);
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (n > 98)
				printf("%i, ", n--);
			else
				printf("%i", 98);
		}
	}
	printf("\n");
}
