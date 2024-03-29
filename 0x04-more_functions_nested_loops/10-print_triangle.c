#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: The integer size of the triangle
 *
 * Return: Nothing.
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 0; j < size - i; j++)
				_putchar(' ');
			for (k = 0; k < i; k++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
