#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: A pointer to the head of the list
 *
 * Return: The number of nodes on the list
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr;
	size_t count;

	count = 0;
	for (ptr = h; ptr != NULL; ptr = ptr->next)
	{
		if (ptr->str != NULL)
			printf("[%i] %s\n", ptr->len, ptr->str);
		else
			printf("[0] (nil)\n");
		count++;
	}
	return (count);
}
