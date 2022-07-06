#include "main.h"

/**
 * times_table - prints 9 times table, starting with 0
 *
 * Return: 0
 */
void times_table(void)
{
	int i, j, prod;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');
			prod = i * j;
			if (prod <= 9)
				_putchar(' ');
			else
			_putchar((prod / 10) + '0');
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');

	}
}

