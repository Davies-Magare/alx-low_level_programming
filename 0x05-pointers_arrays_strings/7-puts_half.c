#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: The string to be printed.
 *
 * Return: Nothing.
 */
void puts_half(char *str)
{
	int len, i;

	len = 0;
	for (i = 0; str[i] != '\0'; i++)
		len++;
	for (i = ((len - 1) / 2) + 1; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
