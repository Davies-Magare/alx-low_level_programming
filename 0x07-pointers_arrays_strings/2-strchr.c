#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: The string to locate the character
 * @c: The character to be located in the string s
 *
 * Return: On success, a pointer to the first occurence of
 * c in s
 * otherwise, return NULL
 */
char *_strchr(char *s, char c)
{
	int i, len;
	char *p;

	p = NULL;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
		len++;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != c)
		{
			if (i <= len)
				continue;
			else
				return (p);
		}
		else
			break;
	}
	return (s + i);
}

