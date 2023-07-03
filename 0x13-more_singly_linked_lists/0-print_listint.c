#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: A pointer to the beginning of the list.
 *
 * Return: The number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	listint_t *ptr;
	size_t count;

	ptr = h;
	while (ptr != NULL)
	{
		printf("%i\n", ptr->n);
		ptr = ptr->next;
		count++;
	}
	return (count);
}
