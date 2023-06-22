#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: The string to be printed between the numbers
 * @n: The number of variable arguments.
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;
	int number;
	
	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		number = va_arg(num, int);
		if (i < n - 1)
		{
			printf("%i", number);
			if (separator != NULL)
				printf("%s", separator);
		}
		else
			printf("%i", number);
	}
	printf("\n");
	va_end(num);
}
