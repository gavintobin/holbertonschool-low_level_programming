#include "lists.h"
/**
 * list_len - list elems
 * @h:pointer
 * Return:whateva
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->len)
			count++;
		h = h->next;
	}
	return (count);
}
