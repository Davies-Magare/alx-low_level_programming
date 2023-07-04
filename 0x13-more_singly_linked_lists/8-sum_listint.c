#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a listint_t linked list
 * @head: The start of the list
 *
 * Return: On success, a sum of all the data
 * Otherwise, return 0
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum;

	ptr = head;
	sum = 0;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
