#include "main.h"

/**
 * print_numbers - prints numbers
 * @n: The number to be printed
 *
 * Return: Nothing
 */
void print_numbers(int n)
{
	int rem;

	if (n > 99)
	{
		_putchar(n / 100 + '0');
		rem = n % 100;
		_putchar(rem / 10 + '0');
		_putchar(rem % 10 + '0');
	}
	else if (n > 9 && n <= 99)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else
		_putchar(n % 10 + '0');
}

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: The integer whose times table is to be printed
 *
 * Return: Nothing
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n > 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (j > 0)
				{
					if (k < 10)
					{
						_putchar(' ');
						_putchar(' ');
						print_numbers(k);
					}
					else if (k >= 10 && k < 100)
					{
						_putchar(' ');
						print_numbers(k);
					}
					else
						print_numbers(k);
				}
				else
					print_numbers(k);
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
