#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: The start of the list
 *
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *curptr;
	list_t *nextptr;

	curptr = head;
	while (curptr != NULL)
	{
		nextptr = curptr->next;
		free(curptr->str);
		free(curptr);
		curptr = nextptr;
	}
}
