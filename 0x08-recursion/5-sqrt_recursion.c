#include "main.h"

/**
 * _sqrt_recursion - returns the squareroot of a number
 * @n: The number whose squareroot is to be calculated
 *
 * Return: The squareroot of the number
 */
int _sqrt_recursion(int n)
{
	return (multiply(n, 1));
}

/**
 * multiply - returns the multiplication of i by i until n
 * @n: The number we whose squareroot we want to find.
 * @i: An integer to be multiplied until the required square is reached.
 *
 * Return: The squareroot.
 */
int multiply(int n, int i)
{
	int sqrt;

	sqrt = i * i;
	if (sqrt == n)
		return (i);
	if (i > n / 2)
		return (-1);
	return (1 * (multiply(n, i + 1)));
}
