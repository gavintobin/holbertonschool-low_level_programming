#include "lists.h"


/**
 * delete_dnodeint_at_index - deletes node
 * @head: pointer to pointer
 * @index: index
 * Return: 1 -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

	dlistint_t *temp;
	dlistint_t *del;
	unsigned int i = 0;

	if (*head == NULL || head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		if (temp->next)
		{
			*head = temp->next;
			(*head)->prev = NULL;
		}
		else
			*head = NULL;
		free(temp);
		return (1);
	}
	while (temp && i < index - 1)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
		return (-1);

	del = temp->next;
	temp->next = del->next;
	if (del->next)
		del->next->prev = temp;
	free(del);

	return (1);
}

