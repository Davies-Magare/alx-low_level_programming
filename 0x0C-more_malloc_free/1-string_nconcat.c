#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - concantenates n bytes of s2 to s1
 * @s1: A string
 * @s2: A second string
 * @n: The number of bytes of s2 to concantenate to s1
 *
 * Return: On success, a pointer to an allocated space in
 * memory with s1 and n bytes of s2 null terminated
 * Otherwise, a pointer to NULL is returned
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	int len1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (s1 != NULL)
		len1 = strlen(s1);
	s = malloc(len1 + n + 1);
	if (s == NULL)
		return (NULL);
	strcpy(s, s1);
	strncat(s, s2, n);
	return (s);
}
