#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: The integer argument count to the main function.
 * @argv: A pointer to an array of string arguments to the
 * main function.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int result, i;

	if (argc == 1)
		printf("%i\n", 0);
	if (argc > 1)
	{
		result = 0;
		for (i = 1;  i < argc; i++)
		{
			if (atoi(argv[i]) != 0)
				result += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%i\n", result);
	}
	return (0);
}


