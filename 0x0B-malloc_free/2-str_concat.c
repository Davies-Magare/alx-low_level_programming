#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - concantenates two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: On success, a pointer to the concantenated
 * string in memory. Otherwise, the function returns a
 * pointer to null.
 */
char *str_concat(char *s1, char *s2)
{
	char *strp;
	int len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (s1 != NULL)
		len1 = strlen(s1);
	if (s2 != NULL)
		len2 = strlen(s2);
	strp = malloc(len1 + len2 + 1);
	if (strp == NULL)
		return (NULL);
	strcpy(strp, s1);
	strcat(strp, s2);
	return (strp);
}

