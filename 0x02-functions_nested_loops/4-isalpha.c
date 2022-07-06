#include "main.h"

/** 
 * _isalpha - checks for alphabetic character.
 * @c: Character to be checked
 *
 * Return: 1 if alpha character, 0 if not alpha character
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if
		(c >= 'A' && c <= 'Z')
			return (1);
	else
		return (0);
}
