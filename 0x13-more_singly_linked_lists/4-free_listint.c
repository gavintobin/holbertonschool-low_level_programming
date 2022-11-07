#include "lists.h"

/**
 * free_listint - frees a list
 * @head: pointer to head
 * Return: none
 */

void free_listint(listint_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
