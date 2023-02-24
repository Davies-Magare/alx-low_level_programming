#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	long fib1, fib2, fib3;
	int i;

	fib1 = 1;
	fib2 = 2;

	printf("%li, %li, ", fib1, fib2);
	for (i = 0; i < 48; i++)
	{
		fib3 = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib3;
		if (i < 47)
			printf("%li, ", fib3);
		else
			printf("%li", fib3);
	}
	printf("\n");
	return (0);
}
