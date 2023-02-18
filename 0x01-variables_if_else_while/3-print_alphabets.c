#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c, C;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	C = 'A';
	for (; C <= 'Z'; C++)
		putchar(C);
	putchar('\n');
	return (0);
}
