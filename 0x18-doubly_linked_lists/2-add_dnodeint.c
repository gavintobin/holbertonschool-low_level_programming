#include "lists.h"

/**
 * add_dnodeint - adds nn at beginning
 * @head: pointer to pointer
 * @n: int
 * Return: nn
 */


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nn = malloc(sizeof(nn));
	dlistint_t *tail;

	nn->n = n;

	if (*head == NULL)
	{
		(*head) = tail = nn;
		(*head)->prev = NULL;
		tail->next = NULL;
	}
	else
	{
		(*head)->prev = nn;
		nn->next = (*head);
		nn->prev = NULL;
		(*head) = nn;
	}
	return (nn);
}

