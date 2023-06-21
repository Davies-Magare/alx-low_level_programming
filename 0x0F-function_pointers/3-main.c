#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - driver function for a simple calculator
 * @argc: The argument count
 * @argv: Array of pointers to arguments passed to main
 *
 * Return: Always 0 (Success);
 */
int main(int argc, char *argv[])
{
	int (*ptr)(int, int);
	int result, status;
	char op;

	if (argc > 4)
	{
		printf("Error\n");
		exit(98);
	}
	status = sscanf(argv[2], "%c", &op);
	if (op != '+' && op != '-' && op != '*' && op != '/' && op != '%'
			&& status == 1)
	{
		printf("Error\n");
		exit(99);
	}
	if ((atoi(argv[3]) == 0) && (op == '/' || op == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	ptr = get_op_func(argv[2]);
	result = ptr(atoi(argv[1]), atoi(argv[3]));
	printf("%i\n", result);
	return (0);
}
