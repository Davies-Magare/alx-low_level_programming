#include "lists.h"

/**
 * listint_len - returns the number of elements in a listint_t list
 * @h: The beginning of the list
 *
 * Return: The number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	size_t count;

	ptr = h;
	count = 0;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
