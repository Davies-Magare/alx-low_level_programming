#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: An integer
 * @y: An integer
 *
 * Return: x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
	int multi;

	multi = 1;
	if (y < 0)
	{
		multi = -1;
		return (multi);
	}
	if (y == 0)
		return (multi);
	return (x * _pow_recursion(x, y - 1));
}
