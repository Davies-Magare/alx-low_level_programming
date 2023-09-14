#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a dlistint_t list
 * @h: A pointer to the start of the list
 *
 * Return: The number of elements in the linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t count;

	temp = h;
	count = 0;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
