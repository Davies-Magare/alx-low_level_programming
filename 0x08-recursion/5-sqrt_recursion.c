#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: An integer
 *
 * Return: On success, the natural square root of the number
 * On failure -1 is returned
 */
int _sqrt_recursion(int n)
{
	int sq;

	sq = sqrt_compt(n, 0);
	return (sq);
}

/**
 * sqrt_compt - A helper function that computes the square root of a number
 * @x: The number to find the square root
 * @y: An initial guess
 *
 * Return: On success the natural square root of x
 * Otherwise -1 is returned
 */
int sqrt_compt(int x, int y)
{
	if (y > x / 2 || y < 0)
		return (-1);
	if (y * y == x)
		return (y);
	sqrt_compt(x, y + 1);
}
