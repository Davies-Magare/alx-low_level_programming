#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list and returns the data
 * @head: The start of the list
 *
 * Return: The head node's data(n)
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	ptr = *head;
	*head = ptr->next;
	n = ptr->n;
	free(ptr);
	return (n);
}
