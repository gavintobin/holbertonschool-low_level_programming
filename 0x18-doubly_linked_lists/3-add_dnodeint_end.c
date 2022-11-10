#include "lists.h"


/**
 * add_dnodeint_end - adds nn at end of list
 * @head: pointer to pointer
 * @n: int
 * Return: addres of new elem
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head;
	dlistint_t *nn = malloc(sizeof(nn));

	if (!nn)
	   return (NULL);

	nn->n = n;
	nn->next = NULL;
	nn->prev = NULL;

	if (*head == NULL)
	{
		*head = nn;
		return (nn);
	}
	while (temp->next)
		temp = temp->next;

	temp->next = nn;
	nn->prev = temp;

	return (nn);
}

