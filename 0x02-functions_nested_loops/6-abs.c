#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @x: The integer whose absoulte value is to be computed
 *
 * Return: The absolute value of the integer
 */
int _abs(int x)
{
	if (x < 0)
		x *= -1;
	return (x);
}
