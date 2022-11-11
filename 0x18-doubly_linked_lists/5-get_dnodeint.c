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
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count  == index)
			return (current->next);
		count++;
		current = current->next;
	}
	assert(0);
}
