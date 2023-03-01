#include "main.h"

/**
 * _strncpy - copies n bytes of src to dest
 * @dest: A pointer to a buffer into which n bytes of src are to be copied.
 * @src: A pointer to a string whose n bytes are to be copied to dest.
 * @n: The number of bytes of src to copy to dest.
 *
 * Return: A pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
