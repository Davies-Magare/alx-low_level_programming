#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: The argument count to main
 * @argv: An array of pointers to string arguments to main
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%i\n", argc - 1);
	return (0);
}
