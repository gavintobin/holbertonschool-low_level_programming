#include "lists.h"


/**
 * sum_listint -returns sum of all data
 * @head: pointer to list
 * Return: 0 if empty
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp = head;
	int sum = 0;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
