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
	int i, len1, len2, j;

	A = NULL;
	if (s1 == NULL)
		len1 = 0;
	else if (s2 == NULL)
		len2 = 0;
	else
	{
		len1 = 0;
		for (i = 0; s1[i] != '\0'; i++)
			len1++;
		len2 = 0;
		for (i = 0; s2[i] != '\0'; i++)
			len2++;
	}
	A = malloc((len1 + len2 + 1) * sizeof(*A));
	if (A == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		A[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
		A[i + j] = s2[j];
	A[i + j] = '\0';
	return (A);
}
