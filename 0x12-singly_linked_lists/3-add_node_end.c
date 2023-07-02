#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: The start of the list
 * @str: The string to be copied
 *
 * Return: On success, the address of the new_element
 * Otherwise, return NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newptr;
	list_t *curptr;

	newptr = (list_t *)malloc(sizeof(list_t));
	if (newptr == NULL)
		return (NULL);
	newptr->str = strdup(str);
	newptr->len = strlen(str);
	newptr->next = NULL;
	if (*head == NULL)
		*head = newptr;
	else
	{
		curptr = *head;
		while (curptr->next != NULL)
		{
			curptr = curptr->next;
		}
		curptr->next = newptr;
	}
	return (newptr);
}
