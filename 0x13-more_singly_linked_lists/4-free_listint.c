#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: The start of the list
 *
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;
	listint_t *next_ptr;

	ptr = head;
	while (ptr != NULL)
	{
		next_ptr = ptr->next;
		free(ptr);
		ptr = next_ptr;
	}
}
