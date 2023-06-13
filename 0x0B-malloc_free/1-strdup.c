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
	
	strp = malloc(strlen(str));
	if (strp == NULL)
		return (NULL);
	strcpy(strp, str);
	return(strp);
}
