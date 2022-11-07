#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head:pointer to pointer
 * @index: index
 * Return: 1, -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *deleted;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		deleted = *head;
		*head = (*head)->next;
		free(deleted);
		return (1);
	}
	while (tmp && index != 0)
	{
		if (i == index - 1)
			break;
		tmp = tmp->next;
		i++;
	}
	if (!tmp)
		return (-1);
	deleted = tmp->next;
	tmp->next = tmp->next->next;
	free(deleted);
	return (1);
}

