#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: A list of arguments passed to the function
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	int i;
	va_list num;

	va_start(num, format);
	i = 0;
	while (format[i] != '\0')
	{
		print_fmt(&num, format[i]);
		i += 1;
		if (format[i] != '\0' && (format[i] == 'c' || format[i] == 'i' ||
			format[i] == 'f' || format[i] == 's'))
		{
			printf(", ");
		}
	}
	printf("\n");
	va_end(num);
}

/**
 * print_fmt - prints an argument in the argument list
 * @c: A format character
 * @num: A pointer to the first argument in the list
 *
 * Return: Nothing
 */

void print_fmt(va_list  *num, char c)
{
	char *string;

	switch (c)
	{
		case 'c':
			_putchar(va_arg(*num, int));
			break;
		case 'i':
			printf("%i", va_arg(*num, int));
			break;
		case 's':
			string = va_arg(*num, char *);
			if (string == NULL)
			{
				printf("(null)");
				break;
			}
			printf("%s", string);
			break;
		case 'f':
			printf("%.2f", va_arg(*num, double));
			break;
		default:
			break;
	}
}



