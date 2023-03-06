#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory
 * area dest
 * @dest: A pointer to the memory area to which to copy.
 * @src: A pointer to the memory area to be copied to dest.
 * @n: The number of bytes of src to copy to dest.
 *
 * Return: A pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
