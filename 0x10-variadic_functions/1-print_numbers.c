#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @n: The variable number of arguments
 * @separator: A string to be printed in between the numbers
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
			printf("%i", va_arg(args, int));
			if (separator != NULL)
				printf("%c", *separator);
			printf(" ");
		}
		else
		{
			printf("%i", va_arg(args, int));
		}
	}
	printf("\n");
}

