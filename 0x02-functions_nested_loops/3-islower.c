#include "main.h"

/**
 * _islower - checks for lowercase character
 *@c: the charcter to be checked
 *
 * Return: 1 if c is lowercase
 * Otherwise return 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
