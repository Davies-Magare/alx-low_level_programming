#include "main.h"

/**
 * _isalpha - checks for alhpabetic character
 * @c: The character to be checked.
 *
 * Return: 1 if c is a letter, lowercase or uppercase.
 * Otherwise return 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
