#include "main.h"
#include <stdio.h>

/**
 * 0-isupper.c - checks for uppercase character.
 * @c: character to be checked
 * Return: 0
 */
int_isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
