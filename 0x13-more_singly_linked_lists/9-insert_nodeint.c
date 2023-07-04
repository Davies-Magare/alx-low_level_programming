#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: The start of the list
 * @idx: The index where the new node should be added
 * @n: An integer
 *
 * Return: On success, a pointer to the inserted node
 * Otherwise, return NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newp;
	listint_t *ptr;
	listint_t *temp;
	unsigned int count;

	newp = (listint_t *) malloc(sizeof(listint_t));
	if (newp == NULL)
		return (NULL);
	newp->n = n;
	if (idx == 0)
	{
		newp->next = *head;
		*head = newp;
		return (newp);
	}
	else
	{
		ptr = *head;
		count = 0;
		while (ptr != NULL)
		{
			if (count == idx - 1)
				break;
			count++;
			ptr = ptr->next;
		}
		if (ptr == NULL)
			return (NULL);
		temp = ptr->next;
		ptr->next = newp;
		newp->next = temp;
	}
	return (newp);
}
