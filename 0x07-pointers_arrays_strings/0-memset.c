#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: A pointer to a memory area
 * @b: A constant byte to fill the memory area
 * @n: The first bytes of s to be filled with b
 *
 * Return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
