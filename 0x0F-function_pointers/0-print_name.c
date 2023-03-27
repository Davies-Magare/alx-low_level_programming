#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: A pointer to a name
 * @f: A function pointer
 *
 * Return: Nothing
 */
void print_name(char *name, void(*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}
