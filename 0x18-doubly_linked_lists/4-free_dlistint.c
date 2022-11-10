#include "lists.h"


/**
 * free_dlistint - frees a list
 * @head; pointer to list
 * Return: none
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (temp)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
	free(temp);
}
