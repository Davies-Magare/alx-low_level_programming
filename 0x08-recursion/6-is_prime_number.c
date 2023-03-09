#include "main.h"

/**
 * is_prime_number - Determines if integer is prime number
 * @n: The integer to be checked for prime property
 *
 * Return: 1 if n is prime, Otherwise return 0
 */
int is_prime_number(int n)
{
	return (find_prime(n, 2));
}

/**
 * find_prime - Determines if a number is prime
 * @n: The number to be tested for prime property
 * @i: An integer by which n is to be divided by
 *
 * Return: 1 if n is prime, Otherwise return 0
 */
int find_prime(int n, int i)
{
	if (n == 1 || n == -1)
		return (0);
	if (n % i == 0 && i < n)
		return (0);
	if (i > n)
		return (1);
	if (n > 0)
		return (find_prime(n, i + 1));
	else
		return (find_prime(n, i - 1));
}
