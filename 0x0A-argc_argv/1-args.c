#include <stdio.h>

/**
 * main - prints number of arguments passed to it
 * @argc: Integer number of arguments passed to the main function.
 * @argv: A pointer to an array of strings passed as arugments to the main
 * function.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%i\n", argc - 1);
	return (0);
}
