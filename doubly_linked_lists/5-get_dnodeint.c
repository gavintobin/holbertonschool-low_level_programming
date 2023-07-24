#include "lists.h"

/**
 * get_dnodeint_at_index - main function
 * @head: var
 * @index: var
 * Return: dlistint_t
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

unsigned int counter = 0;

while (head && counter < index)
{

if (head == NULL)
{
return (NULL);
}
else
{
counter++;
head = head->next;
}
}

return (head);

}
