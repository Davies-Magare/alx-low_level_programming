#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: A pointer to the name in memory
 * @f: A function pointer to the printing function
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
