#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: A string.
 *
 * Return: An integer equivalent of the string.
 */
int _atoi(char *s)
{
	int i, len;
	unsigned int num;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
		len++;
	num = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 45 && (s[i + 1] >= 48 && s[i + 1] <= 57))
			_putchar('-');
		if (s[i] >= 48 && s[i] <= 57)
		{
			if (s[i + 1] >= 48 && s[i + 1] <= 57)
				num = (10 * num) + (s[i] - 48);
			else
			{
				num = (10 * num) + (s[i] - 48);
				break;
			}
		}
		else
		{
			if (i < len - 1)
				continue;
			else
				return (0);
		}
	}
	return (num);
}
