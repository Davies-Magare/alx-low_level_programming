#include "lists.h"
#include <stdlib.h>

/**
 * add_node - adds a node to the beginning of a list_t list
 * @head: A pointer to the beginning of the list
 * @str: The string to be duplicated in each node
 *
 * Return: A pointer to the beginning of the list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newptr;

	newptr = (list_t *)malloc(sizeof(list_t));
	if (newptr != NULL)
	{
		newptr->str = strdup(str);
		newptr->len = strlen(str);
		newptr->next = *head;
		*head = newptr;
	}
	return (newptr);
}
