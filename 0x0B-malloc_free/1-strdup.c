#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: The string to be duplicated in memory.
 *
 * Return: On Success, a pointer to the duplicated string.
 * Otherwise, return NULL.
 */
char *_strdup(char *str)
{
	int i, len;
	char *dup;

	dup = NULL;
	if (str == NULL)
		return (NULL);
	len = 0;
	for (i = 0; str[i] != '\0'; i++)
		len++;
	dup = malloc(len + 1);
	if (dup == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		dup[i] = str[i];
	dup[i] = '\0';
	return (dup);
}
