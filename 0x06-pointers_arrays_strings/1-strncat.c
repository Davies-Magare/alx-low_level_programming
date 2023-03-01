#include "main.h"

/**
 * _strncat - concantenates n bytes from src to dest
 * @dest: A pointer to the string into which src is appended.
 * @src: A pointer to the string to be appended to dest.
 * @n: Number of bytes from src to be appended to dest.
 *
 * Return: A pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len;

	len = 0;
	for (i = 0; dest[i] != '\0'; i++)
		len++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len + i] = src[i];
	dest[len + i] = '\0';
	return (dest);
}
