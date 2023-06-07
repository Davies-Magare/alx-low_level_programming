#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: The string to be encoded to rot13
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; input[j] != '\0'; j++)
		{
			if (input[j] == str[i])
			{
				str[i] = output[j];
				break;
			}
		}
	}
	return (str);
}
