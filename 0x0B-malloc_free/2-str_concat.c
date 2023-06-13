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

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	strp = malloc(strlen(s1) + strlen(s2) + 1);
	if (strp == NULL)
		return (NULL);
	strcpy(strp, s1);
	strcat(strp, s2);
	return (strp);
}

