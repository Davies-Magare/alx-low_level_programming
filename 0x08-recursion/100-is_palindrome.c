#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: The string to be checked.
 *
 * Return: 1 if a string is a palindrome
 * 0 if it is not.
 */
int is_palindrome(char *s)
{
	char *s2;

	s2 = s + (_strlen(s) - 1);
	return (_check_palindrome(s, s2));
}

/**
 * _strlen - finds the length of a string through recursion
 * @s: A string
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	if (*s == 0)
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * _check_palindrome - checks whether a string is a palindrome
 * @s1: A pointer to the beginning of the string.
 * @s2: A pointer to the end of the string.
 *
 * Return: 1 if the string is a palindrome,
 * 0 if otherwise.
 */
int _check_palindrome(char *s1, char *s2)
{
	if (*s1 != *s2)
		return (0);
	if (s1 - s2 == 1 || s1 - s2 == 2 && *s1 == *s2)
		return (1);
	return (_check_palindrome(s1 + 1, s2 - 1));
}
