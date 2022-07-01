#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	char U;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (U = 'A'; U <= 'Z'; U++)
	{
		putchar(U);
	}
	putchar('\n');
	return (0);
/*Returns a value of 0*/
}
