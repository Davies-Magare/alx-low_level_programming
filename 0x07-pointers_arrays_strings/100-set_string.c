#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * set_string - sets the value of a pointer to a char
 * @s: A pointer to the pointer
 * @to: The pointer to set to
 *
 * Return: Nothing.
 */
void set_string(char **s, char *to)
{
	int len;
	char *str;

	len = strlen(to) + 1;
	str = malloc(len);
	memset(str, 0, len);
	strcpy(str, to);
	*s = str;
}
