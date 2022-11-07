#include "lists.h"

/**
 * free_list - frees a list
 * @head: pointer
 * Return: none
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;e
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}
