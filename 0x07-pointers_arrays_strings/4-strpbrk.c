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
	int i, j, length_of_s, length_of_accept;

	length_of_accept = 0;
	for (i = 0; accept[i] != '\0'; i++)
		length_of_accept++;
	length_of_s = 0;
	for (i = 0; s[i] != '\0'; i++)
		length_of_s++;
	for (i = 0; i <= length_of_s; i++)
	{
		if (i == length_of_s)
			return (NULL);
		for (j = 0; j <= length_of_accept; j++)
		{
			if (s[i] != accept[j])
			{
				if (j < length_of_accept)
					continue;
				else
					break;
			}
			return (s + i);
		}
	}
	return (s + i);
}
