#include <stdio.h>

/**
 * main - prints the program's name followed by a new line
 * @argc: The number of arguments to the main function.
 * @argv: The string arguments to the main function.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
		argv[0] = argv[argc - 1];
	}
	return (0);
}
