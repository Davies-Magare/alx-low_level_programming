#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: The string whose length is to be determined
 *
 * Return: 0
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
	return (i);
}
