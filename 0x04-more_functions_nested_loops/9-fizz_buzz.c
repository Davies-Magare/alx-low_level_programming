#include <stdio.h>

/**
 * main - prints the integers 0 to 100 and replaces
 * multiples of 3 with the word "Fizz", multiples of
 * 5 with "Buzz" and multiples of both 3 and 5 with
 * "FizzBuzz"
 *
 * Return: Nothing.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			if (i % 5 == 0)
				printf("FizzBuzz");
			else
				printf("Fizz");
		}
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
