#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to space in memory containing
 * a copy of the string  given as parameter
 * @str: A pointer to a string
 *
 * Return: On success, a pointe to the duplicated string in memory
 * Otherwise a pointer to null is returned.
 */
char *_strdup(char *str)
{
	char *strp;

	if (str == NULL)
		return (NULL);
	strp = malloc(strlen(str) + 1);
	if (strp == NULL)
		return (NULL);
	strcpy(strp, str);
	return (strp);
}
