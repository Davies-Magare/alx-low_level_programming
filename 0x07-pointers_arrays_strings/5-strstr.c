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
	int i, j, lengthOfHaystack, lengthOfNeedle, k, p;

	for (i = 0; haystack[i] != '\0'; i++)
		lengthOfHaystack++;
	for (i = 0; needle[i] != '\0'; i++)
		lengthOfNeedle++;
	for (i = 0; i <= lengthOfHaystack; i++)
	{
		if (i == lengthOfHaystack)
			return (NULL);
		for (j = 0; j <= lengthOfNeedle; j++)
		{
			if (needle[j] == haystack[i])
			{
				p = i;
				for (k = 0; k <= lengthOfNeedle; k++, p++)
				{
					if (k == lengthOfNeedle)
						return (haystack + i);
					if (needle[k] != haystack[p])
					{
						if (k < lengthOfNeedle - 1)
							return (NULL);
						else
							return (haystack + 1);
					}
					continue;
				}

			}
			break;
		}
	}
	return (haystack + i);
}
