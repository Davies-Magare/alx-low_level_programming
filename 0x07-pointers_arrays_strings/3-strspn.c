#include "main.h"

/**
 * _strspn - gets the length of a prefix string
 * @s: The string whose bytes are to be matched with bytes from accept
 * @accept: The string whose bytes are to be matched with bytes from s
 *
 * Return: The number of bytes in the initial segment of s which consists only
 * of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, len, count;

	count = 0;
	len = 0;
	for (i = 0; accept[i] != '\0'; i++)
		len++;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 4; j++)
		{
			if (s[i] != accept[j])
			{
				if (j < len)
					continue;
				else
					return (count);
			}
			count++;
			break;
		}
	}
	return (count);
}
