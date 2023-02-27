#include "main.h"

/**
 * _strcpy - copies a string pointed by src, including the terminating
 * null byte, to the buffer pointed by dest
 * @dest: A pointer to a buffer into which the string will be copied.
 * @src: A pointer to the string to be copied.
 *
 * Return: A pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
