#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: Count of arguments to main
 * @argv: An array of pointers to string arguments to main
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
