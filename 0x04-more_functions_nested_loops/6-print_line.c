#include "main.h"

/**
 * print_line - Prints a straight line in the terminal
 * @n: length of the line in "_"
 *
 * Return: 0
 */

void print_line(int n)
{
	int i;

	if (n > 0)

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	_putchar('\n');

}
