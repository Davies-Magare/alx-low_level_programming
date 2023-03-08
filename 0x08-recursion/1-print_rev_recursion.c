#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: A pointer to a string.
 *
 * Return: Nothing.
 */
void _print_rev_recursion(char *s)
{
	int count;

	count = 1;

	if (*s = " ")
		return;
	if (*(s + 1) != '\0')
	{
		count++;
		_print_rev_recursion(s + 1);
	}
	if (count != 0)
	{
		_putchar(*s);
		count--;
	}
}


