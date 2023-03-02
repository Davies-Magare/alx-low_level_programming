#include "main.h"

/**
 * cap_string - capitalizes all the words of  a string
 * @s: A pointer to a string.
 *
 * Return: On success (s).
 */
char *cap_string(char *s)
{
	int i, j;
	int punctuationMarks[13] = {44, 59, 46, 33, 63, 34, 40, 41, 123, 125,
					32, 9, 10};
	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && (s[i] >= 97 && s[i] <= 122))
			s[i] = s[i] - 32;
		else
		{
			for (j = 0; j < 13; j++)
			{
				if (s[i] == punctuationMarks[j])
				{
					if (s[i + 1] >= 97 && s[i + 1] <= 122)
						s[i + 1] = s[i + 1] - 32;
				}
			}
		}
	}
	return (s);
}
