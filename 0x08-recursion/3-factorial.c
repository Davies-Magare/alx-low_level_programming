#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: The integer number whose factorial is to be calculated.
 *
 * Return: On Success, the factorial of the number
 * othewise, return -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
