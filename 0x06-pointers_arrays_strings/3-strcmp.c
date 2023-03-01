#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: The integer difference between the two strings.
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0; s1[i] != '\0'; i++)
	{
		for (j = 0; s2[j] != '\0'; i++)
		{
			if (s1[i] == s2[j + i])
				break;
			return (s1[i] - s2[j + i]);
		}
	}
	return (0);
}
