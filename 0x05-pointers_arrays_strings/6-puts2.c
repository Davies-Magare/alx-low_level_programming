#include "main.h"

/**
 * puts2 - prints every other character of a string, starting
 * with the first character, followed by a new line
 * @str: The string to be printed.
 *
 * Return: Nothing.
 */
void puts2(char *str)
{
	int i, len;

	len = 0;
	for (i = 0; str[i] != '\0'; i++)
		len++;
	for (i = 0; str[i] != '\0' && i < len; i += 2)
		if (i % 2 == 0)
			_putchar(str[i]);
	_putchar('\n');
}
