#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: The start of the list
 * @index: The index of the element to be returned
 *
 * Return: On success, the nth node of the list
 * Otherwise, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int count;

	ptr = head;
	count = 0;
	while (ptr != NULL)
	{
		if (count == index)
			return (ptr);
		count++;
		ptr = ptr->next;
	}
	return (ptr);
}
