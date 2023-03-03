#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: A string.
 *
 * Return: A pointer to str.
 */
char *leet(char *str)
{
	char replace[5] = {'4', '3', '0', '7', '1'};
	char replaced[10] = {'A', 'E', 'O', 'T', 'L', 'a', 'e',
				'o', 't', 'l'};
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == replaced[j])
				str[i] = replace[j % 5];
		}
	}
	return (str);
}
