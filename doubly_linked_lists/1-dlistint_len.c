#include "lists.h"

/**
 * dlistint_len - main function
 * @h: var
 * Return: size_t
 */

size_t dlistint_len(const dlistint_t *h)
{

int count = 0;

while (h)
{
count++;
h = h->next;
}

return (count);
}
