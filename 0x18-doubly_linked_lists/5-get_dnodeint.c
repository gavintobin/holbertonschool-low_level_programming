#include "lists.h"
#include <assert.h>
/**
 * get_dnodeint_at_index - returns nth node of list
 * @head: pointer
 * @index: nth node
 * Return: nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
