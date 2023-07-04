#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: The start of the list
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;
	listint_t *ptrnxt;

	if (head == NULL || *head == NULL)
		return;
	ptr = *head;
	while (ptr != NULL)
	{
		ptrnxt = ptr->next;
		free(ptr);
		ptr = ptrnxt;
	}
	*head = NULL;
}
