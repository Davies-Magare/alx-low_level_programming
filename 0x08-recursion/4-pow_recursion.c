#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to power y
 * @x: An integer
 * @y: An integer
 *
 * Return: On Success, x raised to the power of y
 * Otherwise return -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return(x * pow_recursion(x, y-1));
}
