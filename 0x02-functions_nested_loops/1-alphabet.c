#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a newline
 *
 * Return: Nothing
 */
void print_alphabet(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
