#include "main.h"
#include <stdlib.h>

/**
 * _strstr - locates a substring
 * @haystack: A pointer to the string to be scanned
 * for the substring.
 * @needle: A pointer to the substring to be scanned for
 * in the haystack string.
 *
 * Return: On Success, a pointer to the beginning of the located substring
 * Otherwise, return NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k, len;

	len = 0;
	for (i = 0; needle[i] != '\0'; i++)
		len++;
	for (i = 0; haystack[i]; i++)
	{
		if (!(needle[0]))
			break;
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i] == needle[0])
			{
				for (k = 1; needle[k]; k++)
				{
					if (haystack[i + k] != needle[k])
						break;
					else
					{
						if (k < len - 1)
							continue;
						else
							return (haystack + i);
					}
				}
			}
		}
	}
	return (NULL);
}
