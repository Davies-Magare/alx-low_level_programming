#include <stdio.h>

/**
 * main - prints the program name, followed by a new line
 * @argc: Count of arguments to main
 * @argv: An array of pointers to string commands to main
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
