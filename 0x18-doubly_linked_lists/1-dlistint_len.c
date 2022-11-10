#include "lists.h"

/**
 * dlistint_len - num of elements in list
 * @h: pointer to list
 * Return: num of elem
 */

size_t dlistint_len(const dlistint_t *h)
{
	int num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
