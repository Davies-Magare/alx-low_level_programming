#include <stdio.h>

/**
 * main - prints first 98 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int fib1, fib2, fib3;
	int i;

	fib1 = 1;
	fib2 = 2;
	printf("%lu, %lu, ", fib1, fib2);
	for (i = 0; i < 96; i++)
	{
		fib3 = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib3;
		if (i < 95)
			printf("%lu, ", fib3);
		else
			printf("%lu", fib3);
	}
	printf("\n");
	return (0);
}
