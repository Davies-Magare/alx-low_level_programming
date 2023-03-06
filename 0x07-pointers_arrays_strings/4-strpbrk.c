#include "main.h"
#include <stdlib.h>

/**
 * _strpbrk - locates the first occurence in the string s of any of the
 * bytes in the string accept
 * @s: A pointer to the string in which to search the bytes in accept.
 * @accept: The string whose bytes are to be located in s.
 *
 * Return: On Success, a pointer to the byte in s that matches
 * one of hte bytes in accept
 * Otherwise, return NULL
 */
char *_strpbrk(char *s, char  *accept)
{
	int i, j, len;

	for (i = 0; s[i] != '\0'; i++)
		len++;
	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[j] != s[i])
			{
				if (i < len)
					continue;
				else
					return (NULL);
			}
			return (s + i);
		}
	}
	return (s + i);
}
