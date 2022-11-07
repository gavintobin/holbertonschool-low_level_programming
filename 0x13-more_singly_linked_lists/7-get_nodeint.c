#include "lists.h"


/**
 * get_nodeint_at_index - returns nth node
 * @head: pointer
 * @index: beginning of node
 * Return: null
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	while (temp)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
		i++;
	}
	return (NULL);
}
