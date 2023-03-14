#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concantenates two strings
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: On Success, a pointer to the concantenated string in memory
 * Otherwise, the function returns a NULL pointer.
 */
char *str_concat(char *s1, char *s2)
{
	char *A;
	int i, len, j;

	if (s1 == NULL)
		*s1 = '\0';
	if (s2 == NULL)
		*s2 = '\0';
	A = NULL;
	len = 0;
	for (i = 0; s1[i] != '\0'; i++)
		len++;
	for (i = 0; s2[i] != '\0'; i++)
		len++;
	A = malloc((len + 1) * sizeof(*A));
	if (A == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		A[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
		A[i + j] = s2[j];
	A[i + j] = '\0';
	return (A);
}
