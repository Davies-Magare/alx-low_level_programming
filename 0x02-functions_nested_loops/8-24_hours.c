#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 *
 * Return: Nothing
 */
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 5; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					_putchar(i % 10 + '0');
					_putchar(j % 10 + '0');
					_putchar(':');
					_putchar(k % 10 + '0');
					_putchar(l % 10 + '0');
					_putchar('\n');
				}
			}
			if (j == 3 && i == 2)
				break;
		}
	}
}
