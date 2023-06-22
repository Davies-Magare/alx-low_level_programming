#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_strings- prints strings followed by a new line
 * @separator: The string to be printed between the strings
 * @n: The number of string parameters to be printed
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list num;
	char *string;
	unsigned int i;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(num, char *);
		if (i < n - 1)
		{
			if (string != NULL)
			{
				printf("%s", string);
				if (separator != NULL)
					printf("%s", separator);
			}
			else
			{
				printf("(nil)");
				if (separator != NULL)
					printf("%s", separator);
			}
		}
		else
		{
			if (string != NULL)
				printf("%s", string);
			else
				printf("(nil)");
		}
	}
	printf("\n");
}
