#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: The integer argument count to the main function.
 * @argv: A pointer to an array of string arguments passed to the main
 * function.
 *
 * Return: Always 0;
 */
int main(int argc, char *argv[])
{
	int i;
	long int mul;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	mul = 1;
	for (i = 1; i < argc; i++)
	{
		mul *= atoi(argv[i]);
	}
	printf("%li\n", mul);
	return (0);
}
