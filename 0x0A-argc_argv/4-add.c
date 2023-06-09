#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: Count of arguments to main
 * @argv: An array of pointers to string arguments to main
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int sum, index, status;

	sum = 0;
	for (index = 1; index < argc; index++)
	{
		if (argc == 1)
		{
			break;
		}
		status = atoi(argv[index]);
		if (status)
			sum += atoi(argv[index]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%i\n", sum);
	return (0);
}


