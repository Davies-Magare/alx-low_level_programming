#include <stdio.h>

/**
 * main - prints the sum of Fibonacci terms not
 * exceeding 4000000
 *
 * Return: Always 0.
 */
int main(void)
{
	long int fib1, fib2, fib3, sum;
	int i;

	fib1 = 1;
	fib2 = 2;
	sum = 2;
	for (i = 0; i < 50; i++)
	{
		fib3 = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib3;
		if (fib3 < 4000000 && fib3 % 2 == 0)
			sum += fib3;
	}
	printf("%li", sum);
	printf("\n");
}
