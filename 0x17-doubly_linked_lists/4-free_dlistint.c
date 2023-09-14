#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: A pointer to the start of the list
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	head = NULL;
}
