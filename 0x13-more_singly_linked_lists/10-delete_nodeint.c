#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: The start of the list
 * @index: The index of the node to be deleted
 *
 * Return: On success 1, otherwise -1 is returned
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *val_of_idx;
	listint_t **add_of_idxls;
	listint_t *ptr;
	unsigned int count;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		ptr = *head;
		*head = ptr->next;
		free(ptr);
	}
	else
	{
		count = 0;
		ptr = *head;
		while (ptr != NULL)
		{
			if (count == index - 1)
				add_of_idxls = &ptr->next;
			if (count == index)
			{
				val_of_idx = ptr->next;
				break;
			}
			count++;
			ptr = ptr->next;
		}
		if (ptr == NULL)
			return (-1);
		*add_of_idxls = val_of_idx;
		free(ptr);
	}
	return (1);
}
