#include "lists.h"

/**
 * sum_dlistint - returns sum of list data
 * @head: list
 * Return: 0, data
 */


int sum_dlistint(dlistint_t *head)
{
	dlistint_t *next;
	dlistint_t *ptr = head;
	int sum = 0;

	while (ptr != NULL)
	{
		next = ptr->next;
		sum += ptr->n;
		ptr = next;
	}
	return (sum);
}
