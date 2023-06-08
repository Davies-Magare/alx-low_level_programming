#include "main.h"

/**
 * is_prime_number - finds out whether an integer is prime
 * @n: An integer
 *
 * Return: 1 if n is prime, 0 if otherwise
 */
int is_prime_number(int n)
{
	int result;

	result = find_prime(n, 2);
	return (result);
}

/**
 * find_prime - a helper function to test for prime
 * @x: An integer to test for prime.
 * @y: An initial guess
 *
 * Return: 1 if n is prime, 0 if otherwise
 */
int find_prime(int x, int y)
{
	if (x <= 0 || x == 1)
		return (0);
	if (y > x / 2)
		return (1);
	if (x % y == 0)
		return (0);
	return (find_prime(x, y + 1));
}
