#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: The start of the list
 * @n: An integer
 *
 * Return: The address of the new element
 * Otherwise, return NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *ptridx;

	ptr = (listint_t *) malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	if (*head == NULL)
		*head = ptr;
	else
	{
		ptridx = *head;
		while (ptridx->next != NULL)
		{
			ptridx = ptridx->next;
		}
		ptridx->next = ptr;
	}
	return (*head);
}
