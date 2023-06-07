#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: An integer
 *
 * Return: The factorial of n.
 */
int factorial(int n)
{
	int fact;

	fact = 1;
	if (n < 0)
	{
		fact = -1;
		return (fact);
	}
	if (n == 0)
		return (fact);
	fact = n * factorial(n - 1);
	return (fact);
}
