#include "lists.h"
#include<unisrd.h>
/**
 * print_dlistint - prints lements of list
 * @h: pointer
 * Return: num of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int e = 0;

	while (h != NULL)
	{
		printf("%d\n", n);
		h = h->next;
		e++;
	}
	return (e);
}
