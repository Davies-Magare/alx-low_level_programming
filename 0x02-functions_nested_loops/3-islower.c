#include "main.h"

/**
 * int _islower - checks for lowercase character
 * @c: The character to be checked
 *
 * Return: 1 if character lowercase, and 0 if uppercase
 */
int_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
