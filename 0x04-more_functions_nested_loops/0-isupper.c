#include "main.h"
#include "stdio.h"

/**
 * 0-isupper.c - checks for uppercase character.
 * @c: character to be checked
 * Return: 0
 */
int_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
