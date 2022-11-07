#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts new node at given position
 * @head: pointer to pointer
 * @idx: index
 * @n: given position
 * Return :nn
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = head;
	listint_t *nn = malloc(sizeof(*nn));
	unsigned int i = 0;

	if (!n)
		return (NULL);
	nn->n = n;

	if (idx == 0)
	{
		nn->next = *head;
		*head = nn;
		return (nn);
	}
	while (tmp)
	{
		if (i == idx - 1)
			break;
		i++;
		tmp = tmp->next;
	}
	if (i < idx - 1)
		return (NULL);

	nn->next = tmp->next;
	tmp->next = nn;
	return (nn);
}


