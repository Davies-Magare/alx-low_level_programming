#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data of a dlistint_t
 * linked list
 * @head: A pointer to the start of the list
 *
 * Return: The sum of all the data of the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);
	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
