#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concantenates two strings
 * @s1: The first string.
 * @s2: The second string.
 * @n: Bytes of s2 to be concantenated to s1.
 *
 * Return: On success, a pointer to an nelwly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2, and null
 * terminated.
 * On failure, return NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *A;
	int len1;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = 0;
	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	len2 = 0;
	for (i = 0; s2[i] != '\0'; i++)
		len2++;
	A = NULL;
	A = malloc(len1 + n + 1);
	if (A == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		A[i] = s1[i];
	if  (n < len2)
	{
		for (j = 0; j < n; j++)
			A[i + j] = s2[j];
		A[i + j] = '\0';
	}
	else
	{
		for (j = 0; s2[j] != '\0'; j++)
			A[i + j] = s2[j];
		A[i + j] = '\0';
	}
	return (A);
}
