#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: argument count to main
 * @argv: An array of pointers to strings arguments to main
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
		printf("%s\n", argv[count]);
	return (0);
}
