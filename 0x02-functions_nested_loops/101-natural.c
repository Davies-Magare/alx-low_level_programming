#include <stdio.h>

/**
 * main - print the sum of multiples of 3 and 5 upto
 * 1024 exclusive
 *
 * Return: Nothing
 */
int main(void)
{
	int i, sum;

	sum = 0;
	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%i\n", sum);
	return (0);
}
