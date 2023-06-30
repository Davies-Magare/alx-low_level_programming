#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: A pointer to the beginning of the list
 *
 * Return: The number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t count;
	const list_t *ptr;

	if (h == NULL)
		count = 0;
	else
	{
		count = 0;
		for (ptr = h; ptr != NULL; ptr = ptr->next)
		{
			count++;
		}
	}
	return (count);
}
