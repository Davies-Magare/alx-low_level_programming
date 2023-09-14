#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: A pointer to the beginning of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t count;

	for (temp = h, count = 0; temp != NULL; temp = temp->next, count++)
		printf("%i\n", temp->n);
	return (count);
}
