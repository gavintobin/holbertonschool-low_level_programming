#include "lists.h"

/**
 * print_dlistint - main function
 * @h: var
 * Return: size_t
 */

size_t print_dlistint(const dlistint_t *h)
{

int count = 0;

while (h)
{
printf("%d\n", h->n);
count++;
h = h->next;
}

return (count);
}
