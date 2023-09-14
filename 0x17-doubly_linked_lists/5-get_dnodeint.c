#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of
 * a dlistint_t linked list
 * @head: A pointer to the start of the list
 * @index: The index of the node to find
 *
 * Return: On success, the address of the node at index
 * Otherwise return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;
	int found;

	count = 0;
	found = 0;
	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (count == index)
		{
			found = 1;
			break;
		}
		count++;
		head = head->next;
	}
	if (found)
		return (head);
	return (NULL);
}
