#include "main.h"

/**
 * rev_string - reverses a string
 * @s: The string to be reversed
 *
 * Return: Nothing.
 */
void rev_string(char *s)
{
	char temp;
	int i, len;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
		len++;
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
