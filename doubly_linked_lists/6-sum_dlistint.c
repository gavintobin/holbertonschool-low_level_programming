#include "lists.h"

/**
 * sum_dlistint - main function
 * @head: var
 * Return: int
 */

int sum_dlistint(dlistint_t *head)
{

int counter = 0;

while (head)
{

if (head == NULL)
{
return (0);
}
else
{
counter = counter + head->n;
head = head->next;
}
}

return (counter);

}
