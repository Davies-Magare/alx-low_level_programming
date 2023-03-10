#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: The integer argument count.
 * @argv: An array pointer of string arguments passed
 * to the main function.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
