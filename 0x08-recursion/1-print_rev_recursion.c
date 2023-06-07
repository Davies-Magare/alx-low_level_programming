#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: The string to be printed
 *
 * Return: Nothing.
 */
void _print_rev_recursion(char *s)
{
	if (*(s + 1) != '\0')
		print_rev_recursion(s + 1);
	_putchar(*s);
}
