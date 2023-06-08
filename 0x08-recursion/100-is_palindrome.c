#include "main.h"

/**
 * is_palindrome - checks whether a string is a palindrome
 * @s: A string
 *
 * Return: 1 if string is palindrome, 0 if otherwise
 */
int is_palindrome(char *s)
{
	char *s2;
	int res, n;

	if (*s == '\0')
	{
		res = 0;
		return (res);
	}
	n = strlen_rec(s);
	s2 = s + (n - 1);
	res = find_palindrome(s, s2);
	return (res);
}

/**
 * find_palindrome - A helper function to check for palindrome
 * @s: A pointer to the first character of the string
 * @s2: A pointer to the last character of the string
 *
 * Return: 1 if string is palindrome, 0 if otherwise
 */
{
	if (*s != *s2)
		return (0);
	if (s >= s2)
		return (1);
	return (find_palindrome(s + 1, s2 - 1));
}

/**
 * strlen_rec - finds the length of a string
 * @s: A string
 *
 * Return: The length of the string
 */
int strlen_rec(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + strlen_rec(s + 1));
}
