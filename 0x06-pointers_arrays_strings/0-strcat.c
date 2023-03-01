#include "main.h"

/**
 * _strcat - concantenates two strings
 * @dest: The string into which src is appended.
 * @src: The string to be appended to dest.
 *
 * Return: A pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int i, len;

	len = 0;
	for (i = 0; dest[i] != '\0'; i++)
		len++;
	for (i = 0; src[i] != '\0'; i++)
		dest[len + i] = src[i];
	dest[len + i] = '\0';
	return (dest);
}
